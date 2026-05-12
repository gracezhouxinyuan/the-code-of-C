#include <stdio.h>
float sum(float a,float b)
{
	float s;
	s=a+b;
	return s;
}
int main()
{
	int n;
	scanf("%d",&n);
	float num[100];
	int i;
	float s=0;
	for(i=0;i<n;i++)
	{
		scanf("%f",&num[i]);
		s=sum(s,num[i]);
	}
	printf("%.2f\n",s);
	return 0;
}
