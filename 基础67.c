#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	float x=1.5;
	float temp=0;

	float f=0;
	float fd=0; 

	int i;
	for(i=0;i<=100;i++)
	{
		temp=x;
		x=temp-(f/fd);

		f=2*pow(x,3)-4*pow(x,2)+3*x-6;
		fd=6*pow(x,2)-8*x+3;

		if (fabs(temp-x)<1e-6)
		{
			break;
		}
	}

	printf("%.5f\n",x);

	return 0;
}