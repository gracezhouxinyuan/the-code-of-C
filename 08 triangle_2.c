#include <stdio.h>
#include<math.h>
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
float area(float a, float b, float c,float *C)
{   
	float s1;
	float p;
    p=(a+b+c)/2;
    s1=sqrt(p*(p-a)*(p-b)*(p-c));
    *C=a+b+c;
    return s1;
}
int main()
{  
	float a,b,c;
    float S,C;
    scanf("%f%f%f",&a,&b,&c);
    if(valid(a,b,c))
	{
		S=area(a,b,c,&C);
    	printf("%.2f %.2f",S,C);
	}
	else
	{
		printf("Error");
	}
	return 0; 
}
