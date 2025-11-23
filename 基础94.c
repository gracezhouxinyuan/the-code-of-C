#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[10];
	int i=0;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&num[i]);
	}

	int out[10];
	out[0]=num[9];
	i=1;
	for(i=1;i<=9;i++)
	{
			out[i]=num[i-1];	
	}

	i=0;
	for(i=0;i<=9;i++)
	{
		printf("%d ",out[i]);
	}
	return 0;
}