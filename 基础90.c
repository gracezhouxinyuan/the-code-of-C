#include<stdio.h>
int plus(int x);
int digit(int x);
int main(int argc, char const *argv[])
{
	int x;
	scanf("%d",&x);

	int rst=100;

	int first=1;

	while(rst>=10)
	{
		if (first==1)
		{
			printf("%d ",x);
			first=0;
		}
		rst=plus(x);
		printf("%d ",rst);
		x=rst;
	}	
	return 0;
}


int digit(int x)
{
	int rst=1;
	int temp=x;
	while(temp>=10)
	{
		temp/=10;
		rst*=10;
	}
	return rst;
}
int plus(int x)
{
	int temp=x;
	int in=1;
	int rst=1;
	
	int digit_x=digit(x);
	while(digit_x>0)
	{
		in=temp/digit_x;
		rst*=in;
		temp%=digit_x;
		digit_x/=10;
	}
	return rst;
}