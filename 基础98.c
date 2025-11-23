#include<stdio.h>
int main(int argc, char const *argv[])
{
	int height[20];
	int level[10]={0};

	int i=0;
	for(i=0;i<=19;i++)
	{
		scanf("%d",&height[i]);
		
		if (height[i]<150)
		{
			level[0]++;
		}
		else if(height[i]>189)
		{
			level[9]++;
		}
		else
		{
			level[((height[i]-150)/5)+1]++;
		}

	}
	
	int j=0;
	for(j=0;j<=9;j++)
	{
		printf("%d %d\n",j+1,level[j]);
	}

	return 0;
}