#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int kid[12]={0};
	int rst=12;
	int count=0;

	while(rst>1)
	{
		for(i=0;i<12;i++)
		{
			if (kid[i]==0)
			{
				count++;
				if (count==7)
				{
					kid[i]=1;
					rst--;
					count=0;
				}
			}
		}
		if (count<7)
		{
			i=0;
		}
	}

	for(i=0;i<12;i++)
	{
		if (kid[i]==0)
		{
			printf("%d\n",i+1);
		}
	}	

	return 0;
}