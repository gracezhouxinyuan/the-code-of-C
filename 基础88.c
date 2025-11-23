#include<stdio.h>
int main(int argc, char const *argv[])
{
	int qtt1,qtt2,qtt3,qtt4,qtt5;

	int i;
	for(i=0;i<2000;i++)
	{
		qtt1=i/8;
		if (i%8==1)
		{
			qtt2=qtt1/8;
			{
				if (qtt2%8==7)
				{
					qtt3=qtt2/8;
					if (i%17==4)
					{
						qtt4=i/17;
						if (qtt4%17==15)
						{
							qtt5=qtt4/17;
							printf("%d\n",i);
						}
					}
				}
			}
		}
	}
	return 0;
}