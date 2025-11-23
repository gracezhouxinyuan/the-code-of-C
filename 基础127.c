#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int num[n][n];

	int i,j;
	for(i=0;i<n;i++)
	{
		num[i][0]=1;
		num[i][i]=1;

		for(j=1;j<i;j++)
		{
			
				num[i][j]=num[i-1][j-1]+num[i-1][j];
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}

	return 0;
}