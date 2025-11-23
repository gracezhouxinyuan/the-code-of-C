#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i,j,k;
	int num1=0;
	int num2=0;
	for(i=1;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			for(k=0;k<=9;k++)
			{
				num1=100*i+10*j+k;
				num2=i*i*i+j*j*j+k*k*k;
				if (num1==num2)
				{
					printf("%d%d%d ",i,j,k);
				}
			}
		}
	}

	return 0;
}