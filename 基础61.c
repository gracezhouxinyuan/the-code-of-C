#include<stdio.h>
int main(int argc, char const *argv[])
{
	int rst=0;
	int i=1;
	int nxt=1;
	int n=1;

	while(i>=1&&i<=6)
	{
		nxt=1;
		for(n=1;n<=i;n++)
		{
			nxt*=n;
		}
		
		rst+=nxt;
		i++;
	}

	printf("%d",rst);
	return 0;
}