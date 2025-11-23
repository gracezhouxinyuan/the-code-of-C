#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);

	int data[4];
	int i;
	for(i=3;i>=0;i--)
	{
		data[i]=num%10;
		if (num>=10)
		{
			num=(num-data[i])/10;
		}
	}

	for(i=0;i<4;i++)
	{
		data[i]+=5;
		data[i]%=10;
	}

	int temp;
	temp=data[0];
	data[0]=data[3];
	data[3]=temp;

	temp=data[2];
	data[2]=data[1];
	data[1]=temp;

	for(i=0;i<4;i++)
	{
		printf("%d",data[i]);
	}
	return 0;
}