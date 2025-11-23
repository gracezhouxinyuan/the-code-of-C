#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	int rst[100]={0};
	scanf("%d",&num);
	int temp=num;

	int i=0;
	int count=0;
	for(i=0;num!=0;i++)
	{
		temp/=16;
		rst[i]=num-temp*16;
		num=temp;
		count++;
	}

	for(i=count;i>=0;i--)
	{
		if (rst[i]<10&&rst[i]>0)
		{
			printf("%d",rst[i]);
		}
		else
		{
			switch(rst[i])
			{
				case 10:
					printf("A");
					break;
				case 11:
					printf("B");
					break;
				case 12:
					printf("C");
					break;
				case 13:
					printf("D");
					break;
				case 14:
					printf("E");
					break;
				case 15:
					printf("F");
					break;
				default:
					break;
			}
		}
	}
	return 0;
}