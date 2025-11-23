/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	float x[100];
	scanf("%d",&a);
	int i=0;
	x[0]=a/2.0;
	x[1]=(x[0]+a/x[0])/2;
	for(i=2; fabs(x[i]-x[i-1])>=1e-5; i++)
	{
		x[i]=(x[i-1]+a/x[i-1])/2.0;
	}

	printf("%.4f",x[i-1]);
	return 0;
}
