#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ascll(char *p)
{
	int s=0;
	int n=strlen(p);
	char *i=NULL;
	for(i=p;i<p+n;i++)
	{
		s+=(int)(*i);
	}
	return s;
}

int main()
{
	char *i=NULL;
	char *s=(char*)malloc(100*sizeof(char));
	for(i=s;i<s+99;i++)
	{
		scanf("%c",i);
		if (*i=='\n')
		{
			*i='\0';
			break;
		}
	}
	printf("%d",ascll(s));
	return 0;
}