#include<stdio.h>
int main(int argc, char const *argv[])
{
	int N;
	scanf("%d",&N);

	int i,j=1;
	int count=0;
	for(i=1;count<N;i++)
	{
		for(j=1;j<=i;j++)
		{
			count++;
			if(count==N)
			{
				break;
			}
		}
	}

	printf("%d/",j);

	count=0;
	for(i=1;count<N;i++)
	{
		for(j=i;j>=1;j--)
		{
			count++;
			if (count==N)
			{
				break;
			}
		}
	}
	printf("%d",j);
	return 0;
}	