/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num[4]={1,2,3,4};
    int count=0;
    int i,j,k;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(i==j)
            {
                continue;
            }
            for(k=0;k<=3;k++)
            {
                if(i==k||j==k)
                {
                    continue;
                }
                count++;
            }
        }
    }
    
    printf("%d",count);
}