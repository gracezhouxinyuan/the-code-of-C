#include<stdio.h>
#include<string.h>
int isalphabet(char i)
{
    if((i<='z'&&i>='a')||(i<='Z'&&i>='A'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isnumber(char i)
{
    if(i<='9'&&i>='0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void test(char *c,int *alpha,int *num)
{
    *alpha=0;
    *num=0;
    int n=strlen(c);
    int i;
    for(i=0;i<n;i++)
    {
        if(isalphabet(c[i]))
        {
            (*alpha)++;
        }
        else if (isnumber(c[i]))
        {
            (*num)++;
        }
    }
}

int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int thisalpha=0;
    int thisnum=0;
    test(str,&thisalpha,&thisnum);
    printf("%d %d",thisalpha,thisnum);
    return 0;
}