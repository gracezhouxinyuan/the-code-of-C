#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i,n,rst;
	
	for(i=1;n<=9;i++)
	{
		for(n=1;n<=i;n++)
		{
			rst=i*n;
			if(n<i)
			{
				printf("%d*%d=%2d  ",n,i,rst);
			}
			else
			{
				printf("%d*%d=%2d",n,i,rst);
			}
			
		}
		printf("\n");
	}
	return 0;
}