/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    int c=0;
    
    int num;
    scanf("%d",&num);
    c=num%10;
    num-=c;
    b=(num/10)%10;
    num=num/10-b;
    a=num/10;
    
    // printf("%d %d %d\n",num,b,c);
    
    int sum=0;
    int num1=0;
    int num2=0;
    
    num1=100*a + 10*b + c;
    num2=100*c + 10*b + a;
    // printf("%d %d",num1,num2);
    sum=num1+num2;
    printf("%d\n",sum);
    
    return 0;
}