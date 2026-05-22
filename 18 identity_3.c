#include <stdio.h>
struct birth
{
	int year;
	int month;
	int day;
};

struct person
{
	char ID[19];
	char name[20];
	struct birth birthday;
	int flag;
};

char verify(int s) {
    char match[] = {'1', '0', 'x', '9', '8', '7', '6', '5', '4', '3', '2'};
    return match[s];
}

struct person checkperson(struct person p)
{
	int s=0;
	int c[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int i;
	for(i=0;i<17;i++)
	{
		s+=(p.ID[i]-'0')*c[i];
	}
	s%=11;
	char correct=verify(s);
	char input=p.ID[17];
	if(correct==input)
	{
		p.flag=1;
	}
	else
	{
		p.flag=0;
	}
	return p;
}

int str_to_int(char *str, int i, int n)
{  
	int dig=0;
	for(;i<=n;i++) 
	{
		dig=dig*10+(str[i]-'0');
	} 
	return dig;
}
struct person getbirth(struct person p) 
{  
	p.birthday.year=str_to_int(p.ID,6,9);     
	p.birthday.month=str_to_int(p.ID,10,11);    
	p.birthday.day =str_to_int(p.ID,12,13);  
	return p;  
}


int main()
{
	int n;
	scanf("%d",&n);
	struct person per[100];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s %s",per[i].ID,per[i].name);
		per[i]=checkperson(per[i]);
		per[i]=getbirth(per[i]);
		printf("%s %s %d-%d-%d %d\n",per[i].ID,per[i].name,per[i].birthday.year,per[i].birthday.month,per[i].birthday.day,per[i].flag);
	}
	return 0;
}
