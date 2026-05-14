#include<stdio.h>
#include<stdlib.h>
void inv(int *x, int n)
{
	int *i,*j;
	for(i=x,j=x+n-1;j>=i;i++,j--)
	{
		int temp=*i;
		*i=*j;
		*j=temp;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int *p=(int*)malloc(n*sizeof(int));
	int *i=NULL;
	for(i=p;i<p+n;i++)
	{
		scanf("%d",i);
	}
	inv(p,n);
	for(i=p;i<p+n;i++)
	{
		printf("%d ",*i);
	}
	return 0;
}