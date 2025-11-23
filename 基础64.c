#include<stdio.h>
int main(int argc, char const *argv[])
{
	int sum=1;

	int i=1;
	int a=0;
	int b=1;
	int c=0;

	for(i=1;i<=19;i++)
	{
		c=a+b;
		sum+=a+b;
		a=b;
		b=c;
	}


	printf("%d",sum);
	return 0;
}