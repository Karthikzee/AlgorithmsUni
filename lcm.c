#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
	int i, j, lcm;
	printf("Enter two numbers to find GCD: ");
	scanf("%d%d", &i, &j);
	lcm = (i * j) / (gcd(i, j));
	printf("LCM of %d and %d is %d\n", i, j, lcm);
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