#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	double x;
	scanf("%lf",&x);

	double ori=sin(x);

	int i,k;
	double rst=0.0;
	for(i=1;fabs(ori-rst)>=1e-6;i++)
	{
		double temp=0.0;
		double factorial=1.0;
        for(k=1;k<=2*i-1;k++)
        {
            factorial*=k;
        }
		if (i%2==1)
		{
			temp=pow(x,2*i-1)/factorial;
		}
		else
		{
			temp=-pow(x,2*i-1)/factorial;
		}
		rst+=temp;
	}

	printf("%.5lf\n",rst);
	return 0;
}