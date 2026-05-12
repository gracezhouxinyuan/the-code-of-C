#include <stdio.h>
#include <math.h>
int valid(float a, float b,float c)
{
	if (a<=0||b<=0||c<=0) 
	{
		return 0;
    }

    if (a+b>c&&a+c>b&&b+c>a) 
    {
        return 1;
    } 
    else 
    {
        return 0; 
    }
}

float area(float a, float b, float c)
{
	float p;
	float s;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}

int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(valid(a,b,c))
	{
		printf("%.2f",area(a,b,c));
	}
	else
	{
		printf("输入错误");
	}
}