#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);

	int i=1;
	int j=1;

	int S=0;
	int pow=1;

	for(i=1;i<=n;i++)
	{
		pow*=2;

		int fn=1;
		for(j=1;j<=i;j++)
		{
			fn*=j;
		}
		S+=pow*fn;
	}

	printf("%d\n",S);
	return 0;
}