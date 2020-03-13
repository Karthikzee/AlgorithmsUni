//WAP to Bubble Sort.
#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the Number of elements in the array: ");
	scanf("%d", &n);
	int data[n], key;
	printf("Enter the elements of the array to be sorted: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &data[i]);
	}

	printf("Enter the key element to search: ");
	scanf("%d", &key);

	for(int i=0; i<n; i++)
	{
		if(data[i] == key)
		{
			printf("%d is at index %d\n", key, i);
			return 0;
		}
	}
	printf("The key element entered is not found!\n");

}