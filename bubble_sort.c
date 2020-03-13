//WAP to Bubble Sort.
#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the Number of elements in the array: ");
	scanf("%d", &n);
	int data[n], temp;
	printf("Enter the elements of the array to be sorted: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &data[i]);
	}

	for(int i=0; i<=n-2; i++)
	{
		for(int j=0; j <= n-2-i; j++)
		{
			if (data[j+1] < data[j])
			{
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}

	printf("Sorted array is: \n");
	for(int k=0; k<n; k++)
	{
		printf("%d  ", data[k]);
	}
	printf("\n");
}