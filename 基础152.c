#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	char str[25];
	scanf("%s",str);

	int i;
	int acnt=0;
	int bcnt=0;
	int dcnt=0;

	for(i=0;i<strlen(str);i++)
	{
		if (str[i]=='A'||str[i]=='a')
		{
			acnt++;
		}
		if (str[i]=='B'||str[i]=='b')
		{
			bcnt++;
		}
		if (str[i]=='D'||str[i]=='d')
		{
			dcnt++;
		}
	}

	printf("A %d\nB %d\nD %d\n",acnt,bcnt,dcnt);

	return 0;
}