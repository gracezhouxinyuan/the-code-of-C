#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[8];
	int i=0;
	for(i=0;i<=7;i++)
	{
		scanf("%d",&num[i]);
	}

	int m,n;
	int temp=0;
	for(m=0;m<=7;m++)
	{
		for(n=0;n<=6;n++)
		{
			if (num[n]<num[n+1])
			{
				temp=num[n];
				num[n]=num[n+1];
				num[n+1]=temp;
			}
		}
	}

	int j=0;
	for(j=0;j<=7;j++)
	{
		printf("%d ",num[j]);
	}
	return 0;
}