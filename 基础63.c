#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num1=1;
	int num2=1;
	int a=1;
	int b=0;
	int rst1;
	int rst2;
	
	printf("%d/%d ",num1,num2);

	int i=0;

	for(i=2;i<=11;i++)
	{
		rst1=num1+a;
		a=num1;
		rst2=num2+b;
		b=num2;
		num1=rst1;
		num2=rst2;
		printf("%d/%d ",rst1,rst2);
	}

	
	return 0;
}