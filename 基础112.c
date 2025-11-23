#include<stdio.h>
int main(int argc, char const *argv[])
{
	int data[10];
	int i;
	int sum=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&data[i]);
		sum+=data[i];
	}

	float aver;
	aver=sum*1.0/10;
	printf("%d %.2f\n",sum,aver);
	return 0;
}