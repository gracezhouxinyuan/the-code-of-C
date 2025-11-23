#include<stdio.h>
int main(int argc, char const *argv[])
{
	int data[20]={11,19,9,12,5,20,1,18,4,16,6,10,15,2,17,3,14,7,13,8};
	int i;
	int k;
	int a,b,c,d;
	int sum=0;
	int temp=0;
	int temp_a=0,temp_b=0,temp_c=0,temp_d=0,temp_i=0;
	for(k=0;k<20;k++)		
	{
		if (k<=16)
		{
			a=data[k];
			b=data[k+1];
			c=data[k+2];
			d=data[k+3];
		}
		else if(k==17)
		{
			a=data[k];
			b=data[k+1];
			c=data[k+2];
			d=data[0];
		}
		else if (k==18)
		{
			a=data[k];
			b=data[k+1];
			c=data[0];
			d=data[1];
		}
		else if (k==19)
		{
			a=data[k];
			b=data[0];
			c=data[1];
			d=data[2];
		}
		sum=a+b+c+d;
		if (sum>temp)
		{
			temp=sum;
			temp_i=i;
			temp_a=a;
			temp_b=b;
			temp_c=c;
			temp_d=d;
		}
	}

	// printf("%d ",sum);
	printf("%d\n%d %d %d %d",temp_i+1,temp_a,temp_b,temp_c,temp_d);

	return 0;
}