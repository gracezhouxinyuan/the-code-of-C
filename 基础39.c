#include<stdio.h>
int main(int argc, char const *argv[])
{
	double num1,num2;
	char c1;
	float out;
	scanf("%lf%c%lf",&num1,&c1,&num2);

	switch(c1)
	{
	case '+':
		out=num1+num2;
		printf("%.2f",out);
		break;

	case '-':
		out=num1-num2;
		printf("%.2f",out);
		break;

	case '*':
		out=num1*num2;
		printf("%.2f",out);
		break;

	case '/':
		if (num2!=0)
		{
			out=num1/num2;
			printf("%.2f",out);
			break;
		}
		else
		{
			printf("Error");
		}
	}
	return 0;
}