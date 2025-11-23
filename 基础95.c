#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[10];
	
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}

	scanf("\n");
	int m;
	scanf("%d",&m);

	int temp[10];
	int rst=0;

	for(i=0;i<10;i++)
	{
		rst=i+m;
		if (rst<10)
		{
			temp[rst]=num[i];
		}
		else
		{
			rst%=10;
			temp[rst]=num[i];
			// printf("%d",rst);
		}
	}

	for(i=0;i<10;i++)
	{
		printf("%d ",temp[i]);
	}
	return 0;
}