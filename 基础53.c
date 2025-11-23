#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	
	int temp=num;
	int rst[5];
	int count=0;
	int i=0;
	while(temp>0)
	{
		rst[i]=temp%10;
		temp=temp/10;
		count++;
		i++;
	}
	for(i=count-1;i>=0;i--)
	{
		printf("%d ",rst[i]);
	}
	
	return 0;
}

