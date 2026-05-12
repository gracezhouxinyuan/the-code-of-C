#include<stdio.h>
int factorial(int n)
{
	int fac;
	if(n==0||n==1)
	{
		fac=1;
	}
	else
	{
		fac=factorial(n-1)*n;
	}
	return fac;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",factorial(n));
}