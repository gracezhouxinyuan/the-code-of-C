#include<stdio.h>
int main(int argc, char const *argv[])
{
	int data[8]={46,52,68,71,74,83,87,95};

	int num;
	int index=0;
	scanf("%d",&num);

	int isnum=0;

	int left=0;
	int right=7;

	while(left<=right&&isnum!=1)
	{
		int mid=(left+right)/2;
		if (data[mid]==num)
		{
			isnum=1;
			index=mid;
			break;
		}
		else if (data[mid]<num)
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}

	if (isnum==1)
	{
		printf("%d\n",index+1);
	}
	else
	{
		printf("No");
	}
	return 0;
}