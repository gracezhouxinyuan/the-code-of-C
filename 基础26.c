#include<stdio.h>
int main(int argc, char const *argv[])
{
	char in;
	char out;
	in=getchar();

	if(in>=65&&in<=122)
	{
		if (in<=96)
		{
			out=in+32;
		}
		else
		{
			out=in-32;
		}
	printf("%c\n",out);
	}
	else
	{
		printf("%c\n",in);
	}
	return 0;
}