#include<stdio.h>
int main(int argc, char const *argv[])
{
	char in;
	scanf("%c",&in);

	int egl=0;
	int num=0;
	int oth=0;
	char c;

	if((in >= 'A' && in <= 'Z') || (in >= 'a' && in <= 'z'))
    {
        egl++;
    }
    else if (in >= '0' && in <= '9')
    {
        num++;
    }
    else 
    {
        oth++;
    }

	while((c=getchar())!='\n')
	{
		if((c>=65&&c<=90)||(c>=97&&c<=122))
		{
			egl++;
		}
		else if (c>='0'&& c<='9')
		{
			num++;
		}
		else 
		{
			oth++;
		}
	}
	printf("%d %d %d\n",egl,num,oth);
	return 0;
}