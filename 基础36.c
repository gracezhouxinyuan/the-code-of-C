#include<stdio.h>
int main(int argc, char const *argv[])
{
	int year1,year2,mon1,mon2,day1,day2;
	scanf("%d-%d-%d/n",&year1,&mon1,&day1);
	scanf("%d-%d-%d/n",&year2,&mon2,&day2);
	// printf("%d-%d-%d",year1,mon1,day1);
	// printf("%d-%d-%d",year2,mon2,day2);
	if (year1>year2||mon1>mon2||day1>day2)
	{
		printf("No");
	}
	else
	{
		printf("Yes");
			}
	return 0;
}