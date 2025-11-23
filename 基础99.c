#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i=1;
	int j=0;
	int on[20]={0};
	for(i=2;i<=20;i++)
	{
		for(j=0;j<=19;j++)
		{
			if ((j+1)%i==0)
			{
				switch(on[j])
				{
					case 0:
						on[j]=1;
						break;
					case 1:
						on[j]=0;
						break;
				}
			}
		}
	}
	
	int n=0;
	// for(n=0;n<=19;n++)
	// {
	// 	printf("%d ",on[n]);
	// }

	for(n=0;n<=19;n++)
	{
		if (on[n]==1)
		{
			printf("%d ",n+1);
		}
	}
	return 0;
}