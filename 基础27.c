/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int score;
    int y=0;
    scanf("%d",&score);
    
    if(score<60)
    {
        y=0;
    }
    if(score>=60&&score<70)
    {
        y=1;
    }
    if(score>=70&&score<80)
    {
        y=2;
    }
    if(score>=80&&score<90)
    {
        y=3;
    }
    if(score>=90&&score<100)
    {
        y=4;
    }
    if(score==100)
    {
        y=5;
    }
    
    printf("%d",y);
    return 0;
}