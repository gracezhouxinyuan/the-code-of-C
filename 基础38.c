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
    
    int i;
    for(i=1;i<=num/7;i++)
    {
        num-=7*i;
    }
    switch(num)
    {
        case 1:
        printf("Tuesday");
        break;
        case 2:
        printf("Wednesday");
        break;
        case 3:
        printf("Thursday");
        break;
        case 4:
        printf("Friday");
        break;
        case 5:
        printf("Saturday");
        break;
        case 6:
        printf("Sunday");
        break;
        case 7:
        printf("Monday");
        break;
    }

    return 0;
}