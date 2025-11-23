#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);

	if (num%2==0)
	{
		return 1;
	}
	else
	{
		int cnt=1;
		int i;
		while(cnt<=num)
		{
			for(i=1;i<=(num-cnt)/2;i++)
			{
				printf(" ");
			}
			for(i=1;i<=cnt;i++)
			{
				printf("*");
			}
			for(i=1;i<=(num-cnt)/2;i++)
			{
				printf(" ");
			}
			printf("\n");
			cnt+=2;
		}

		cnt-=4;
		// printf("%d",cnt);

		while(cnt<num&&cnt>0)
		{
			for(i=1;i<=(num-cnt)/2;i++)
			{
				printf(" ");
			}
			for(i=1;i<=cnt;i++)
			{
				printf("*");
			}
			for(i=1;i<=(num-cnt)/2;i++)
			{
				printf(" ");
			}
			printf("\n");
			cnt-=2;
		}
	}
	return 0;
}