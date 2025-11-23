#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int total=1020;

	for(i=1;i<=5;i++)
	{
		total=total/4*5+1;
	}

	printf("%d\n",total);

	return 0;
}