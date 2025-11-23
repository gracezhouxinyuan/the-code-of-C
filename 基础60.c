#include<stdio.h>
int main(int argc, char const *argv[])
{
	int rst=0;
	int i=1;

	while(i>=1&&i<=100)
	{
		rst+=i*i;
		i++;
	}

	printf("%d",rst);
	return 0;
}