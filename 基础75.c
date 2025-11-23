#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int cnt=0;
	for(i=1;i<6;i++)
	{
		if (i%2==0)
		{
			while(cnt<i-1)
			{
				printf("#*");
				cnt++;
			}
			printf("#\n");
		}
		else if (i%2==1)
		{
			while(cnt<i-1)
			{
				printf("*#");
				cnt++;
			}
			printf("*\n");
		}
		cnt=0;
	}
	return 0;
}