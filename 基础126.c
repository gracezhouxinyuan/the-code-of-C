#include<stdio.h>
int main(int argc, char const *argv[])
{
	int data[3][4];
	int num[10];
	
	int i,j;
	int k=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(j=0;j<4;j++)
	{
		for(i=0;i<3;i++)
		{
			if (k<10)
			{
				data[i][j]=num[k];
				k++;
			}
			else
			{
				data[i][j]=0;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",data[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}