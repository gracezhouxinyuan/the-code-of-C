#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i,j,k;
	for(i=1;i<=10000;i++)
	{
		for(j=10;j<=100;j++)
		{
			if (i+100==j*j)
			{
				for(k=15;k<=100;k++)
				{
					if (i+268==k*k)
					{
						printf("%d ",i);
					}
				}
			}
		}
	}
	return 0;
}