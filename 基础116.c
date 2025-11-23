#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	int data[100]={0};
	int a,b,c,d;
	scanf("%d\n",&num);
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&data[i]);
	}
	scanf("\n%d %d\n%d %d",&a,&b,&c,&d);

	a-=1;
	b-=1;
	c-=1;
	d-=1;

	int temp=0;
	for(i=0;i<=(b-a);i++)
	{
		temp=data[a+i];
		data[a+i]=data[c+i];
		data[c+i]=temp;
		
	}


	for(i=0;i<num;i++)
	{
		printf("%d ",data[i]);
	}
	return 0;
}