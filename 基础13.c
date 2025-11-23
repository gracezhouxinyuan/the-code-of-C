#include<stdio.h>
int main(int argc, char const *argv[])
{
	int sc1;
	scanf("%d",&sc1);
	int hor;
	int min;
	int sc2;
	hor=sc1/3600;
	sc1=sc1-hor*3600;
	min=sc1/60;
	sc1=sc1-min*60;
	sc2=sc1;
	printf("%d:%d:%d\n",hor,min,sc2);
	return 0;
}