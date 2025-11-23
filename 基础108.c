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

	int j;
	int temp=0;
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-1-i;j++)
		{
			if (data[j]<data[j+1])
			{
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}

	int mid=0;
	float midnum=0.0;
	if (num%2==0)
	{
		mid=num/2;
		// printf("%d",mid);
		midnum=(data[mid]+data[mid-1])/2;
	}
	else
	{
		mid=num/2;
		midnum=1.0*data[mid];
	}

	printf("%.2f\n",midnum);
	return 0;
}