#include<stdio.h>
int main(int argc, char const *argv[])
{
	int rest=1534;

	int i=1;
	for (i = 1;i<=9;i++)
	{
		rest=rest/2-1;
	}

	printf("%d",rest);
	return 0;
}