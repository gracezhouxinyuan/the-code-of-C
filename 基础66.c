#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	float x=0.0;
	float a=-10.0;
	float b=10.0;

	int i;
	int maxtime=100;
	
	for(i=1;i<=maxtime;i++)
	{
		float f=2*pow(x,3)-4*pow(x,2)+3*x-6;
		float fa=2*pow(a,3)-4*pow(a,2)+3*a-6;
		
		if (fabs(f)<1e-6)
		{
			break;
		}
		
		if(f*fa>0)
		{
			a=x;
			x=(a+b)/2;
		}
		else
		{
			b=x;
			x=(a+b)/2;
		}
	}

	printf("%.5f\n",x);

	return 0;
}

// a 	b 	x	+/-
// -10 10	0	+
// 0   10  
