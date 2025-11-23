#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num_2;
	int num_10=0;
	scanf("%d",&num_2);

	int digit=1;
	int temp=num_2;
	int i=0;
	for(i=0;temp>0;i++)
	{
		num_10+=(temp%10)*digit;
		digit*=2;
		temp=(temp-temp%10)/10;
	}

	printf("%d\n",num_10);

	return 0;
}