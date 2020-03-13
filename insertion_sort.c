//WAP to Insertion Sort.
#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the Number of elements in the array: ");
	scanf("%d", &n);
	int data[n], temp, j;
	printf("Enter the elements of the array to be sorted: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &data[i]);
	}

	for(int i=1; i<= n-1; i++)
	{
		temp = data[i];
		j=i-1;
		while(j >= 0 && data[j]>temp)
		{
			data[j+1] = data[j];
			j = j-1;
		}
		data[j+1] = temp;
	}

	printf("Sorted array is: \n");
	for(int k=0; k<n; k++)
	{
		printf("%d  ", data[k]);
	}
	printf("\n");
}