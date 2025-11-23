#include<stdio.h>
int main(int argc, char const *argv[])
{
	float sc[10];
	float high=0;
	float low=0;
	float avr=0;
	float sum=0;

	int i=0;
	float a=0.0;
	float b=0.0;

	for(i=0;i<10;i++)
	{
		scanf("%f",&sc[i]);
		sum+=sc[i];

		a=sc[i];
		b=sc[i];

		if (high<a)
		{
			high=a;
		}
		
		if (low>b)
		{
			low=b;
		}
	}
	avr=(sum-high-low)/8;

	printf("%.3f %.3f %.3f\n",high,low,avr);
	return 0;
}