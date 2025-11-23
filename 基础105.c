#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[8];
	int isnum[8]={0};

	int i,j,k;

	for(i=0;i<8;i++)
	{
		scanf("%d",&num[i]);
	}

	int temp=0;
	for(i=0;i<8;i++)
	{
		temp=num[i];

		if (num[i]!=0)
		{
			for(k=i+1;k<8;k++)
			{
				if (num[i]==num[k])
				{
					num[i]=0;
				}
			}
		}
			isnum[i]=num[i];;
	}

	for(i=0;i<7;i++)
	{
		for(j=0;j<7-i;j++)
		{
			int temp=0;
			if (isnum[j]>isnum[j+1])
			{
				temp=isnum[j];
				isnum[j]=isnum[j+1];
				isnum[j+1]=temp;
			}
		}
	}

	for(i=0;i<8;i++)
	{
		if (isnum[i]!=0)
		{
			printf("%d ",isnum[i]);		
		}
	}
	
	return 0;
}