#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d %d",&a,&b);
	int gcd=1;
	int lcm=1;
	int i;

	int temp=0;
	if (a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}

	for(i=2;i<=a;i++)
	{
		if (a%i==0&&b%i==0)
		{
			gcd*=i;
			a/=i;
			b/=i;
		}
	}

	lcm=gcd*a*b;
	printf("%d %d",gcd,lcm);

	return 0;
}