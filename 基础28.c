#include<stdio.h>
int main(int argc, char const *argv[])
{
	float pay;
	scanf("%f",&pay);

	if(pay<=100)
	{
		pay=0.9*pay;
	}
	else
	{
		pay=100*0.9+(pay-100)*0.8;
	}
	printf("%.2f\n",pay);
	return 0;
}