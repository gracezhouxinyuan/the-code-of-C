#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	int rst=0;
	int digit;
	scanf("%d",&num);
	do
	{
		digit=num%10;
		rst=rst*10+digit;
		num/=10;
	}while(num>0);
	printf("%d\n",rst);
	return 0;
}