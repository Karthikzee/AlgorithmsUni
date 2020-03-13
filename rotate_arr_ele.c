//WAP to roatate an array by d elements
#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the Number of elements in the array: ");
	scanf("%d", &n);
	int data[n], d, newdata[n], ini;
	printf("Enter the elements of the array: \n");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &data[i]);
	}

	printf("Enter the number of rotations: ");
	scanf("%d", &d);

	ini = (d%n);

	for(int j=0; j<n; j++)
	{

		newdata[j] = data[ini];
		ini = (ini+1)%n;
	}

	printf("The rotated array is: \n");
	for(int k=0; k<n; k++)
	{
		printf("%d   ", newdata[k]);
	}
	printf("\n");
}