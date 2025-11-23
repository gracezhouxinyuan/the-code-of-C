#include<stdio.h>
int main(int argc, char const *argv[])
{
	int score[100];

	int i;
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
			if (score[i]<60)
			{
				printf("%d ",score[i]);
				count++;
			}
		}
	}
	printf("\n");

	// printf("%d",count);

	float percent;
	percent=100.00*count/i;
	printf("%.2f",percent);
	return 0;
}