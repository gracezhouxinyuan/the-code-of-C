#include<stdio.h>
int main(int argc, char const *argv[])
{
	int candidate[10]={0};
	int i,k;
	int vote[20];
	for(i=0;i<20;i++)
	{
		scanf("%d",&vote[i]);
		for(k=1;k<=10;k++)
		{
			if (vote[i]==k)
			{
				candidate[k-1]++;
			}
		}
	}

	int temp=0;
	int temp_member=0;
	int member[10];

	for(i=0;i<10;i++)
	{
		member[i]=i+1;
	}

	for(i=0;i<9;i++)
	{
		for(k=0;k<9-i;k++)
		{
			if (candidate[k]<candidate[k+1])
			{
				temp=candidate[k];
				candidate[k]=candidate[k+1];
				candidate[k+1]=temp;

				temp_member=member[k];
				member[k]=member[k+1];
				member[k+1]=temp_member;

			}
		}
	}

	for(i=0;i<10;i++)
	{
		printf("%d %d\n",member[i],candidate[i]);
	}


	return 0;
}