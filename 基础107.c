#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	scanf("%d\n",&num);

	int i;
	int data[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&data[i]);
	}

	for(i=1;i<num-1;i++)
	{
		if (data[i]>data[i-1]&&data[i]>data[i+1])
		{
			printf("%d ",data[i]);
		}
	}

	return 0;
}