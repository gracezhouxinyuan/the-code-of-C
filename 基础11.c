#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	int a;
	int b;
	int c;
	c=num%10;
	num=(num-c)/10;
	b=num%10;
	num=(num-b)/10;
	a=num;
	printf("%d%d%d",c,b,a);
	return 0;
}