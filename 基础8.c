#include<stdio.h>
int main(int argc, char const *argv[])
{
	float r;
	float h;
	float sur;
	float pi=3.1416;
	scanf("%f %f",&r,&h);
	sur=2*(pi*r*r)+2*pi*r*h;
	printf("%.3f\n",sur);
	return 0;
}