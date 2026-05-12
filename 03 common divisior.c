#include<stdio.h>
int min(int a,int b)
{
	if (a>=b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int common(int a,int b)
{
	if (min(a,b)==a)
	{
		return b%a;
	}
	else
	{
		return a%b;
	}
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	while(common(a,b)!=0)
	{
		if (min(a,b)==a)
		{
			a=common(a,b);
		}
		else
		{
			b=common(a,b);
		}
	}
	printf("%d",min(a,b));
	return 0;
}