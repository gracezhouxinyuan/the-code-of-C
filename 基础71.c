#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i,k;
	int cnt=1;
	for (i=1;i<10;i++)
	{
		for(cnt=0;cnt<i-1;cnt++)
		{
			printf("        ");

		}
		cnt=1;
		for(k=i;k<10;k++)
		{
			printf("%d*%d=%2d  ",i,k,i*k);
		}
		printf("\n");
	}


	return 0;
}