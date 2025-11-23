#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num1;
	int num2;
	int num3;
	int SUM;
	float aver;
	scanf("%d %d %d",&num1,&num2,&num3);
	SUM=num1+num2+num3;
	aver=1.0*SUM/3;
	printf("%d %.2f\n",SUM,aver);
	return 0;
}