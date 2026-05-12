#include<stdio.h>
int main()
{
	struct s
	{
		int num;
		char name[20];
		float score;
	};
	int n;
	scanf("%d",&n);
	struct s student[n];

	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d %s %f",&student[i].num,student[i].name,&student[i].score);
	}

	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if (student[j].score<student[min].score)
			{
				min=j;
			}
		}
		if (min!=i) 
		{
      temp=student[i].score;
      student[i].score=student[min].score;
      student[min].score=temp;
    }
	}
	for(i=0;i<n;i++)
	{
		printf("%d %s %.2f\n",student[i].num,student[i].name,student[i].score);
	}

  return 0;
}