#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,m;
	scanf("%d %d\n",&n,&m);

	int i,j;
	int num[n][m];
	int temp=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&num[i][j]);
			if (j==0)
			{
				temp=num[i][0];
			}

			if (num[i][j]<temp)
			{
				temp=num[i][j];
			}
		}
		printf("%d ",temp);
		temp=0;
	}
	
	return 0;
}