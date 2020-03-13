//WAP to Selection Sort.
#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the Number of elements in the array: ");
	scanf("%d", &n);
	int data[n], min, temp;
	printf("Enter the elements of the array to be sorted: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &data[i]);
	}

	for(int i=0; i <= n-2 ; i++)
	{
		min = i;
		for (int j = i+1; j <= n-1; j++)
		{
			if (data[j]< data[min])
			{
				min = j;
			}
			temp = data[i];
			data[i] = data[min];
			data[min] = temp;
		}
	}

	printf("Sorted array is: \n");
	for(int k=0; k<n; k++)
	{
		printf("%d  ", data[k]);
	}
	printf("\n");
}
