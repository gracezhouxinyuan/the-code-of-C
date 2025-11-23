#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[10];
	int i=0;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&num[i]);
	}

	for(i=9;i>=0;i--)
	{
		printf("%d ",num[i]);
	}
	return 0;
}