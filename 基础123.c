#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[3][4];

	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&num[i][j]);
			printf("%d ",num[i][j]);
		}
	}

	return 0;
}