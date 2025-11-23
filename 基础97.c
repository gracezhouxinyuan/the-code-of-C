#include<stdio.h>

int isleap(int year)
{
	if (year%4==0&&year%100!=0)
	{
		return year;
	}
	else
	{
		return 0;
	}
}
int main(int argc, char const *argv[])
{
	int year,month,day;
	int num=0;
	scanf("%d-%d-%d",&year,&month,&day);

	int everymonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	if (year!=1984)
	{
			if (isleap(year))
		{
			everymonth[1]=29;

		}

		int i=0;
		for(i=0;i<month-1;i++)
		{
			num+=everymonth[i];
		}
		num+=day;

		int temp=year-1;
		int leap=0;

		int all=temp-1984+1;

		for(i=1984;i<=temp;i++)
		{
			if (isleap(i))
			{
				leap++;
			}
		}
		num+=(all-leap)*365+leap*366;
	}
	else
	{
		int num=0;
		int i=1;
		everymonth[1]=29;
		for (i=0;i<month-1;i++)
		{
			num+=everymonth[i];
		}
		num+=day;
	}
	

	int rst;
	rst=num%7;

	// printf("%d",num);

	switch(rst)
	{
		case 0:
			printf("Sunday");
			break;
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
	}

	return 0;
}