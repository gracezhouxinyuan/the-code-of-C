#include<stdio.h>
int main(int argc, char const *argv[])
{
	int hour1,hour2,min1,min2,scd1,scd2;
	scanf("%d:%d:%d %d:%d:%d",&hour1,&min1,&scd1,&hour2,&min2,&scd2);
	
	int time1=0;
	int time2=0;

	time1=hour1*3600+min1*60+scd1;
	time2=hour2*3600+min2*60+scd2;

	float minus;
	minus=(time2-time1)*1.0;

	// printf("%d %d ",time1,time2);

	int hour,min,scd;
	hour=minus/3600;
	minus-=hour*3600;
	min=minus/60;
	minus-=min*60;
	scd=minus;

	printf("%02d:%02d:%02d ",hour,min,scd);

	if (hour>=2)
	{
		printf("NO");
	}
	else
	{
		printf("OK");
	}
	return 0;
}