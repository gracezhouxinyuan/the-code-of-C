#include<stdio.h>
int isPrime(int num);
int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	printf("%d=",num);

	int i=2;
	int first=1;
	while(num>1)
	{
		if (isPrime(i)&&num%i==0)
		{
			if (first!=1)
			{
				printf("*");
			}

			printf("%d",i);
			num/=i;
			first=0;
		}
		else
		{
			i++;
		}
	}
	printf("\n");
	return 0;
}

int isPrime(int num)
{
	int i;
	for(i=2;i<num;i++)
	{
		if (num%i==0)
		{
			return 0;		
		}
	}
	return 1;
}