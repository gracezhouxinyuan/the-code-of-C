/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    char c,past,next;
    scanf("%c",&c);
    if(c>'a'&&c<'z')
    {
        past=c-1;
        next=c+1;
        printf("%c %c",past,next);
    }
    else if(c=='a')
    {
        printf("z b");
    }
    else if(c=='z')
    {
        printf("y a");
    }
    
    return 0;
}