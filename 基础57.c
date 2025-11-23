/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    
    int i=2;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("No");
            break;
        }
        else
        {
            printf("Yes");
            break;
        }
    }
}