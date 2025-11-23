/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int mycmp(const char *s1,const char *s2)
{
    int idx=0;
    while(s1[idx]==s2[idx]&&s1[idx]!='\0')
    {
        idx++;
    }
    if(s1[idx]-s2[idx]==0)
    {
        return 0;
    }
    else if(s1[idx]-s2[idx]<0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char s1[100],s2[100];
    scanf("%s\n%s",s1,s2);
    int rst=mycmp(s1,s2);
    printf("%d\n",rst);
    return 0;
}
