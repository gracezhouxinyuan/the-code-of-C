#include<stdio.h>
int main(int argc, char const *argv[])
{
	int ori;
	int time;
	float profit;
	scanf("%d %d",&ori,&time);

	switch(time)
	{
	case 1 :
		profit=ori*time*0.035;
		printf("%.2f\n",profit);
		break;
	case 2 :
		profit=ori*time*0.044;
		printf("%.2f\n",profit);
		break;
	case 3 :
		profit=ori*time*0.050;
		printf("%.2f\n",profit);
		break;
	case 5 :
		profit=ori*time*0.065;
		printf("%.2f\n",profit);
		break;
	default :
		printf("ERROR\n");
	}
	return 0;
}