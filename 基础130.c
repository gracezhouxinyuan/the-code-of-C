#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,m;
	scanf("%d %d\n",&n,&m);

	int isPrime=0;
	int i,j;
	int num[n][m];
	int temp_co[n];
	int seat_co[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&num[i][j]);
			if (j==0)
			{
				temp_co[i]=num[i][0];
				seat_co[i]=0;
			}
			if (num[i][j]>temp_co[i])
			{
				temp_co[i]=num[i][j];
				seat_co[i]=j;
			}
		}
	}

	int seat_row[m];
	int temp_row[m];
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			if (i==0)
			{
				temp_row[j]=num[0][j];
				seat_row[j]=0;
			}
			if (num[i][j]<temp_row[j])
			{
				temp_row[j]=num[i][j];
				seat_row[j]=i;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		if (seat_row[seat_co[i]]==i)
		{
			printf("%d ",num[i][seat_co[i]]);
			isPrime=1;
		}
	}

	if (isPrime==0)
	{
		printf("No");
	}
	return 0;
}