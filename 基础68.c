#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int x;
	int y;

	for(x=-45;x<=45;x++)
	{
		for(y=-45;y<=45;y++)
		{
			if (x*x+y*y==2017)
			{
				printf("%d %d\n",x,y);
			}
		}
	}
	return 0;
}