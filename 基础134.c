#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[3][4];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{			
			if (i-1<0)
			{
				scanf("%d",&num[2][j]);
			}
			else
			{
				scanf("%d",&num[i-1][j]);
			}
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
		printf("\n");

	}
	
	// 0	2	33
	// 1	0	44
	// 2	1	55
	return 0;
}