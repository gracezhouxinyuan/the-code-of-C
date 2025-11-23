#include<stdio.h>
int main(int argc, char const *argv[])
{
	int all=0;
	int i=800;
	for(i=800;i<=900;i++)
	{
		if(i%2==0)
		{
			all+=i;
		}
	}

	printf("%d\n",all);
	return 0;
}