#include<stdio.h>
int main(int argc, char const *argv[])
{
	int year,month,day;
	int num=0;
	int everymonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d-%d-%d",&year,&month,&day);

	if (year%4==0)
	{
		everymonth[1]=29;
	}

	int i=0;
	for(i=0;i<month-1;i++)
	{
		num+=everymonth[i];
	}

	num+=day;

	printf("%d\n",num);

	return 0;
}