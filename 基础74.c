#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[10];
	int i;
	int sum=0;
	for(i=0;sum<=10000;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];
	}

	double ave;
	ave=sum/i;
	printf("%d %.2f\n",i,ave);

	return 0;
}