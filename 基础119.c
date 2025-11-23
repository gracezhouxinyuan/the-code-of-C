#include<stdio.h>
int main(int argc, char const *argv[])
{
	int N,I,J;
	scanf("%d %d %d",&N,&I,&J);

	int i;
	for(i=1;i<=N;i++)
	{
		printf("(%d,%d)",I,i);
	}
	printf("\n");

	for(i=1;i<=N;i++)
	{
		printf("(%d,%d)",i,J);
	}
	printf("\n");

	for(i=-1;i<=1;i++)
	{
		printf("(%d,%d)",I+i,J+i);
	}
	printf("\n");

	for(i=-2;i<=1;i++)
	{
		printf("(%d,%d)",I-i,J+i);
	}

	return 0;
}