#include<stdio.h>
int main(int argc, char const *argv[])
{
	int year,month,day;
	scanf("%d-%d-%d",&year,&month,&day);

	if (year%4==0&&year%100!=0)
	{
		daymost[month-1]=29;
	}
	else
	{
		daymost[month-1]=28;
	}
		
	
	else
	{
		if (month%2==0)
		{
			daymost[month-1]=31;
		}
		else if (month%2==1)
		{
			daymost[month-1]=30;
		}	
	}

	if (month==1&&day==1)
	{
		printf("%d-12-31\n",year-1);
	}
	else if (day==1)
	{
		printf("%d-%d-%d\n",year,month-1,daymost);
	}
	else
	{
		printf("%d-%d-%d\n",year,month,day-1);
	}

	return 0;
}