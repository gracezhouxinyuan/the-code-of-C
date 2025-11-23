#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int ori=n;
	int num[n][n];

	int i,j;
	int last=1;
	int count=0;
	int turn=0;
	int temp=n;
	
	switch(turn)
		{
			case 0:
				for(j=turn;j<n;j++)
				{
					num[i][j]=last;
					if (last<25)
					{
						last++;
					}
				}
				count++;
				temp--;
				turn++;
			case 1:
				for(j=temp;j<n;j++)
				{
					num[temp][j]=last;
					if (last<25)
					{
						last++;
					}
				}
				count++;
				turn++;
			case 2:
				for(j=temp-1;j>=n-temp;j--)
				{
					num[temp+2][j]=last;
					if (last<25)
					{
						last++;
					}
				}
				turn++;
			case 3:
				for(j=temp;j>=n-temp;j--)
				{
					num[temp][j]=last;
					if (last<25)
					{
						last++;
					}
				}
		}
	}

	int count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",num[i][j]);
			count++;
		}
		if (count==n)
		{
			printf("\n");
			count=0;
		}
	}
	return 0;
}