#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Character
{
	char name[50];
	int attack;
	int defense;
};
struct Averages
{
	float averageAttack;
	float averageDefense;
};

struct Averages getAverage(struct Character character[],struct Averages average,int n)
{
	int i;
	average.averageAttack=0;
	average.averageDefense=0;
	for(i=0;i<n;i++)
	{
		average.averageAttack+=character[i].attack;
		average.averageDefense+=character[i].defense;
	}
	if(n > 0)
    {
        average.averageAttack /= n;
        average.averageDefense /= n;
    }
	return average;
}

int main()
{
	int n;
	scanf("%d\n",&n);
	struct Character character[n];
	struct Averages average;
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d",character[i].name,&character[i].attack,&character[i].defense);
	}
	average=getAverage(character,average,n);
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(character[i].attack>=average.averageAttack&&character[i].defense>=average.averageDefense)
		{
			flag=1;
			printf("%s %d %d\n",character[i].name,character[i].attack,character[i].defense);
		}
	}
	if(flag==0)
	{
		printf("Nobody");
	}
	return 0;
}
