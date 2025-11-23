#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[10];
	float income[10];
	float sum=0;
	float average=0;

	int i=0;
	for(i=0;i<=19;i++)
	{
		if (i%2==0)
		{
			scanf("%d",&num[i/2]);
		}
		else
		{
			scanf("%f",&income[(i-1)/2]);
			sum+=income[(i-1)/2];
		}
	}
	
	average=sum/10;
	printf("%.2f\n",average);

	int j=0;
	for(j=0;j<=9;j++)
	{
		if (income[j]<average)
		{
			printf("%d %.2f\n",num[j],income[j]);
		}
	}

	return 0;
}