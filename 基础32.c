#include<stdio.h>
int main(int argc, char const *argv[])
{
	float in;
	float out=0.0;
	scanf("%f",&in);
	if (in<=3500)
	{
		out=0;
	}
	else{
	in=in-3500;
	if (in<=1500)
	{
		out=0.03*in;
	}
	else if (in>1500&&in<=4500)
	{
		out=in*0.10-105;
	}
	else if (in>4500&&in<9000)
	{
		out=in*0.20-555;
	}
	else if (in>=9000&&in<=35000)
	{
		out=in* 0.25 -1005;
	}
	}
	printf("%.2f\n",out);
	return 0;
}