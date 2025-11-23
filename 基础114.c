#include<stdio.h>
int main(int argc, char const *argv[])
{
	int score[100];

	int i,k;
	int count=0;
	for(i=0;i<100;i++)
	{
		scanf("%d",&score[i]);
		if (score[i]==0)
		{
			break;
		}
		else
		{
			count++;
		}
	}

	int temp=0;
	for(i=0;i<count-1;i++)
	{
		for(k=0;k<count-1-i;k++)
		{
			if (score[k]<score[k+1])
			{
				temp=score[k+1];
				score[k+1]=score[k];
				score[k]=temp;
			}
		}
	}

	for(i=0;i<10;i++)
	{
		printf("%d ",score[i]);
	}
	return 0;
}