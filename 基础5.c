#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	int b;
	int i;
	int r;
	scanf("%d %d",&a,&b);
	i=a/b;
	r=a%b;
	printf("%d %d",i,r);
	return 0;
}