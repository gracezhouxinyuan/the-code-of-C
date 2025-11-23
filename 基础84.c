#include<stdio.h>
int main(int argc, char const *argv[])
{
	float highall=0;
	float temp=100;

	int i;
	for(i=1;i<11;i++)
	{
		highall+=temp;
		temp/=2;
		highall+=temp;
	}

	highall-=temp;

	printf("%.2f %.2f\n",highall,temp);

	return 0;
}