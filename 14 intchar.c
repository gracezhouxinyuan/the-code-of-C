#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int alpha(char c)
{
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		return 1;
	}
	else if (c>='0'&&c<='9')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void fun(char *s,char *s1,char *s2)
{
	char *i=NULL;
	int n=strlen(s);
	for(i=s;i<s+n;i++)
	{
		if (alpha(*i)==1)
		{
			*s1=*i;
			s1++;
		}
		else if (alpha(*i)==0)
		{
			*s2=*i;
			s2++;
		}
	}
	*s1='\0';
	*s2='\0';
}

int main()
{
	char *s=(char *)malloc(100*sizeof(char));
	char *s1=(char *)malloc(100*sizeof(char));
	char *s2=(char *)malloc(100*sizeof(char));
	char *i=NULL;	
	for(i=s;i<s+99;i++)
	{
		scanf("%c",i);
		if (*i=='\n')
		{
			break;
		}
	}
	fun(s,s1,s2);
	printf("%s\n",s1);
	printf("%s",s2);
	free(s);
	free(s1);
	free(s2);
	return 0;
}
