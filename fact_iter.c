#include <stdio.h>

int main(void)
{
	int n, fact = 1;
	do
	{
		printf("Enter number to find factorial: ");
		scanf("%d", &n);
	}
	while(n < 0);
	{
		for(int i=n; i>=1; i--)
		{
			fact = fact * i;
		}
		printf("The Factorial of %d is %d\n", n, fact);
	}
}