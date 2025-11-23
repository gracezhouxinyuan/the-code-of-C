#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	char c;
	int count=0;
	for(i=97;i<=122;i++)
	{
		c=i;
		printf("%c",c);
		count++;
		if (count%13==0)
		{
			printf("\n");
		}
	}

	for(i=122;i>=97;i--)
	{
		c=i;
		printf("%c",c);
		count++;
		if (count%13==0)
		{
			printf("\n");
		}
	}
	return 0;
}