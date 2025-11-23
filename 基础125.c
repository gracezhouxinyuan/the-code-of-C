#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[3][4];
	int i,j;
	int count=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&num[i][j]);
			count++;
			if (count==10)
			{
				break;
			}
		}
	}

	if (count<12)
	{
		int rst=12-count;
		for(i=2;i>=0;i--)
		{
			for(j=3;j>=0;j--)
			{
				if (rst>0)
				{
					num[i][j]=0;
					rst--;
				}
			}
		}
	}

	count=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",num[i][j]);
			count++;
			if (count==4)
			{
				printf("\n");
				count=0;
			}
		}
	}
	return 0;
}