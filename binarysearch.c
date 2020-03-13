//WAP to implement Binary Search.
#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the Number of elements in the array: ");
	scanf("%d", &n);
	int data[n], mid, ini = 0, key, last = n, oldmid;
	printf("Enter the elements of the array in sorted/ascending order: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &data[i]);
	}

	printf("Enter the key to search: ");
	scanf("%d", &key);

	mid = (ini + last)/2;
	do
	{
		if(data[mid] == key)
		{
			printf("The key %d is in %d place.\n", key, mid+1);
			return 0;
		}
		else if (data[mid] > key)
		{
			last = mid;
			oldmid = mid;
			mid = (ini + last)/2;
		}
		else if(data[mid] < key)
		{
			ini = mid;
			oldmid = mid;
			mid = (ini + last)/2;
		}
	}
	while(mid != oldmid);

	printf("Key Element not found.\n");
}