#include<stdio.h>
int main(int argc, char const *argv[])
{
	int ori[9];

	int i=0;
	for(i=0;i<=7;i++)
	{
		scanf("%d",&ori[i]);

	}
	scanf("\n%d",&ori[8]);

	int j=0;
	int m=0;
	int temp;
	for(j=0;j<=8;j++)
	{
		for(m=0;m<=7;m++)
		{
			if (ori[m]>ori[m+1])
			{
				temp=ori[m];
				ori[m]=ori[m+1];
				ori[m+1]=temp;
			}
		}
	}

	int n=0;
	for(n=0;n<=8;n++)
	{
		printf("%d ",ori[n]);
	}
	return 0;
}