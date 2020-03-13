#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
	int i, j, res;
	printf("Enter two numbers to find GCD: ");
	scanf("%d%d", &i, &j);
	res = gcd(i, j);
	printf("GCD of %d and %d is %d\n", i, j, res);
}

int gcd(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	else
	{
		gcd(b, a%b);
	}
}
