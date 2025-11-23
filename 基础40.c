#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	int m;
	scanf("%d %d",&n,&m);
	
	int rbt;
	int chk;
	int isPrime=0;
	for(rbt=0;rbt<=n;rbt++)
	{
		chk=n-rbt;

		if(m==rbt*4+chk*2)
		{
			printf("%d %d\n",chk,rbt);
			isPrime=1;
			break;
		}
	}
	if(isPrime==0)
	{
		printf("ERROR\n");
	}
}
// rbt		chk
// 1	4	13	26	L!=m	rbt+=1
// 2   8   12  24  L==m    printf


