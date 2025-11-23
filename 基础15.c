#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);

	int a=0;
	int b=0;
	int c=0;

	a=8;
	b=(num-2)*12;
	c=(num-2)*(num-2)*6;
	printf("%d %d %d\n",a,b,c);
	return 0;
}