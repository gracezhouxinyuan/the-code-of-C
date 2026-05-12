#include <stdio.h>
char verify(int s) {
    char match[] = {'1', '0', 'x', '9', '8', '7', '6', '5', '4', '3', '2'};
    return match[s];
}

int check(char num[19])
{
	int s=0;
	int c[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int i;
	for(i=0;i<17;i++)
	{
		s+=(num[i]-'0')*c[i];
	}
	s%=11;
	char correct=verify(s);
	char input=num[17];
	if(correct==input)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char num[19];
	scanf("%s",num);
	if (check(num))
	{
		printf("%c%c%c%c-%c%c-%c%c",num[6],num[7],num[8],num[9],num[10],num[11],num[12],num[13]);
	}
	else
	{
		printf("Error");
	}
	return 0;
}
