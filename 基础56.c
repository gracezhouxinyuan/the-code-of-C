#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int i=101;
	int d=2;
	int isPrime;
	int count=0;

	while(i<=200)
	{
		isPrime=1;

		for(d=2;d<=sqrt(i);d++)
		{
			if (i%d==0)
			{
				isPrime=0;
				break;
			}
		}
			if(isPrime==1)
			{
				printf("%d ",i);
				count++;
			}

			if (count%10==0)
		{
			printf("\n");
		}
		i++;
	}
	
	return 0;
}