#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[10];

	int i=0;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&num[i]);
		printf("%d ",num[i]);
		if (i%4==3)
		{
			printf("\n");
		}
	}


	return 0;
}