#include<stdio.h>
int isPrime(int i)
{
	int ret=1;
	int j;
	for(j=2;j<i-1;j++)
	{
		if (i%j==0)
		{
			ret=0;
			break;
		}
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);

	int i,j;
	for(i=2;i<=num/2;i++)
	{
		if (isPrime(i)&&isPrime(num-i))
		{
			printf("%d=%d+%d\n",num,i,num-i);
		}
	}
	return 0;
}