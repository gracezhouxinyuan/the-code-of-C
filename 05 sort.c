#include <stdio.h>
void sort(int *a,int *b)
{
	if (*a>*b)
	{
		int t;
		t=*a;
		*a=*b;
		*b=t;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int num[100];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sort(&num[i],&num[j]);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",num[i]);
	}
	return 0;

}