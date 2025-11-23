#include<stdio.h>
int main(int argc, char const *argv[])
{
	int year,month;
	scanf("%d-%d",&year,&month);

	if (month<8)
	{
		if (month%2==0&&month!=2)
		{
			printf("30\n");
		}
		else if (month%2==1)
		{
			printf("31\n");
		}
		else
		{
			if (year%4==0&&year%100!=0)
			{
				printf("29\n");
			}
			else
			{
				printf("28\n");
			}
		}
	}
	else
	{
		if (month%2==0)
		{
			printf("31\n");
		}
		else if (month%2==1)
		{
			printf("30\n");
		}	
	}

	return 0;
}