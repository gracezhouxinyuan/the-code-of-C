#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	
	for(i=1;i<1000;i++)
	{
		int digit=10;
		int minus=i*i;
		int temp=i;

		while(temp>=10)
		{
			temp/=10;
			digit*=10;	
		}
		// printf("%d\n",digit);
		if (((minus-i)%digit)==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
