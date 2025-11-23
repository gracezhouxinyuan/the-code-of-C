#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[5][5];
	int i=0;
	int j;
	int n=1;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			num[i][j]=n;
			n++;
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}


	return 0;
}