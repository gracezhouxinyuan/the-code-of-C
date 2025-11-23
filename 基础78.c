#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	int i=1;
	char rst[5];

	for(i=1;i<=1000;i++)
	{
		if(i%13==0)
		{
			sprintf(rst,"%d",i);
			
			int count=0;
			int j=0;
			for(j=0;j<=strlen(rst);j++)
			{
				if (rst[j]=='7')
				{
					count++;
				}
			
			}
			if (count>=2)
			{
					printf("%d ",i);
			}
		}
	}
	return 0;
}