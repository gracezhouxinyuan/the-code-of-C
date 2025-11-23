#include<stdio.h>
int main(int argc, char const *argv[])
{
	char team1[3]={'a','b','c'};
	char team2[3]={'x','y','z'};

	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if (i!=j&&j!=k&&i!=k)
				{
					if (i!=0&&k!=0&&k!=2)
					{
						printf("%c:%c %c:%c %c:%c\n",team1[0],team2[i],team1[1],team2[j],team1[2],team2[k]);
					}
				}
			}
		}
	}

	
	return 0;
}