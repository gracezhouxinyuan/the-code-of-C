/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int num[3];
    int count=0;
    
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]%2==1)
        {
            count++;
        }
    }
    
    if(count==2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}