#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[10];
	int i;
	int temp=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		if (num[i]>temp)
		{
			temp=num[i];
		}
	}
	for(i=0;i<10;i++)
	{
		if (num[i]!=temp)
		{
			printf("%d ",num[i]);
		}
	}
	return 0;
}