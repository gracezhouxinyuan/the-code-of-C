#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	int i;
	int base=1;
	int count=0;
	while(10*base<=num)
	{
		base*=10;
		count++;
	}
	int mem[count];
	int temp=num;
	int count_0=0;
	int max=0;
	for(i=0;i<count;i++)
	{
		mem[i]=temp%10;
		temp=temp/10;

		if (mem[i]==0)
		{
			count_0++;
		}

		if (mem[i]>max)
		{
			max=mem[i];
		}
	}
	
	printf("%d %d\n",count_0,max);
	return 0;
}