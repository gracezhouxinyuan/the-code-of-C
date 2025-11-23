#include<stdio.h>
int main(int argc, char const *argv[])
{
	float num;
	scanf("%f",&num);
	if (num<0)
	{
		num=-num;
	}
	printf("%.2f\n",num);
	return 0;
}