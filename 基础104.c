#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num[8];
	int i,j,k;
	int temp=0;

	for(i=0;i<8;i++)
	{
		scanf("%d",&num[i]);
	}

	for(i=0;i<7;i++)
	{
		k=i;
		for(j=i+1;j<8;j++)
		{
			if (num[j]<num[k])
			{
				k=j;
			}
		}

		if (k!=i)
		{
			temp=num[i];
			num[i]=num[k];
			num[k]=temp;
		}
	}


	for(i=0;i<8;i++)
	{
		printf("%d ",num[i]);
	}
	
	return 0;
}