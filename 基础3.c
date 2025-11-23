#include<stdio.h>
int main(int argc, char const *argv[])
{
	float f1;
	int z1;
	char c;
	float f2;
	scanf("%f %d %c %f",&f1,&z1,&c,&f2);
	printf("%c %d %.2f %.2f\n",c,z1,f1,f2);
	return 0;
}