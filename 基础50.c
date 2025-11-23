#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num,nummax;
	for(num=100;num<=1000;num++)
	{
		if (num%7==3)
		{
			if (num%5==2)
			{
				if (num%3==1)
				{
					nummax=num;
				}
			}
		}
	}
	printf("%d\n",nummax);
	return 0;
}