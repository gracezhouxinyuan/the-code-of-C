#include<stdio.h>
int main(int argc, char const *argv[])
{
	int matrix[3][4];

	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matrix[j][i]);
		}
	}
	return 0;
}