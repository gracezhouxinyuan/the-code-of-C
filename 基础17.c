#include<stdio.h>
int main(int argc, char const *argv[])
{
	int hour,min;
	scanf("%d:%d",&hour,&min);

	float angle;
	angle=(5.5*min)-(30*hour);
	if (angle<0)
	{
		angle=0-angle;
	}

	if (angle>180.00)
	{
		angle=360.0-angle;
	}

	printf("%.2f\n",angle);
	return 0;
}