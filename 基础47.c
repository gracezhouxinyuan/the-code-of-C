#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i,j,k;
	int num[30];
	int sum=0;
	
	for(i=1;i<=100;i++)
	{
		sum=0;
		for(j=0;sum<=500;j++)
		{
			sum+=i+j;
			if (sum==500)
			{
				for(k=0;k<=j;k++)
				{
					num[k]=i+k;
					printf("%d ",num[k]);
				}
				printf("\n");
				break;
			}
			if (sum>500)
			{
				break;
			}

		}
	}
	return 0;
}