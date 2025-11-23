#include<stdio.h>
int main(int argc, char const *argv[])
{
	int in[10];
	int i=0;
	int fir=0;
	int scd=0;
	for(i=0;i<=9;i++)
	{
		if (i<9)
		{
			scanf("%d ",&in[i]);
		}
		else
		{
			scanf("%d",&in[i]);
		}
		
		if (in[i]>=fir)
		{
			scd=fir;
			fir=in[i];
		}
		else if(in[i] > scd && in[i] != fir) 
		{
            scd= in[i]; 
		}
	}
	printf("%d %d\n",fir,scd);
	return 0;
}
