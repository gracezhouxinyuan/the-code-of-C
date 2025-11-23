#include<stdio.h>
int main(int argc, char const *argv[])
{
	int data[10];
	int num[10];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&data[i]);
		num[i]=data[i];
	}

	int k;
	int temp=0;

	for(i=0;i<9;i++)
	{
		for(k=0;k<9-i;k++)
		{
			if (num[k]<num[k+1])
			{
				temp=num[k];
				num[k]=num[k+1];
				num[k+1]=temp;			
			}
		}
	}

	int big;

	for(i=0;i<10;i++)
	{
		if (data[i]==num[0])
		{
			big=i;
		}
	}

	temp=data[big];
	data[big]=data[0];
	data[0]=temp;

	for(i=0;i<10;i++)
	{
		printf("%d ",data[i]);
	}

	return 0;
}