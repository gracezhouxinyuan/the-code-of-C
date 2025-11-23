#include<stdio.h>
int main(int argc, char const *argv[])
{
	int digit[10]={0};
	int data[100]={0};

	unsigned long long num;
	scanf("%llu",&num);

	int i;
	unsigned long long temp=num;
	for(i=0;i<20;i++)
	{
		data[i]=temp%10;
		temp=(temp-data[i])/10;
		switch(data[i])
		{
			case 0:
				digit[0]++;
				break;
			case 1:
				digit[1]++;
				break;
			case 2:
				digit[2]++;
				break;
			case 3:
				digit[3]++;
				break;
			case 4:
				digit[4]++;
				break;
			case 5:
				digit[5]++;
				break;
			case 6:
				digit[6]++;
				break;
			case 7:
				digit[7]++;
				break;
			case 8:
				digit[8]++;
				break;
			case 9:
				digit[9]++;
				break;
		}
	}
	// for(i=0;i<20;i++)
	// {
	// 	printf("%d ",data[i]);
	// }

	for(i=0;i<10;i++)
	{
		printf("%d %d\n",i,digit[i]);
	}

	return 0;
}