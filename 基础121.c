#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[3][4];
	int count=0;

	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&num[i][j]);
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