#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ISBN(char *p)
{
	char *spe=(char*)malloc(4*sizeof(char));
	strncpy(spe,p+4,3);
	spe[3]='\0';
	if(strcmp(spe,"030")==0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int s=0;
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		char *word=(char*)malloc(14*sizeof(int));
		scanf("%s",word);
		if (ISBN(word))
		{
			s++;
		}
	}
	printf("%d\n",s);
	return 0;
}