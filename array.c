#include<stdio.h>
int main()
{
	int test;
	int p1,p2;
	int d1=0;
	int d2=0;
	int m,s;
	scanf("%d",&test);

	for(int i=0;i<test;i++)
	{
		scanf("%d",p1);
		scanf("%d",p2);

		if(p1>p2)
		{
			d1=d1+(p1-p2);
		}
		else
		{
			d2=d2+(p2-p1);
		}
	}
		if(d1>d2)
		{
			m=p1;
			s=d1;
		}
		else
		{
			m=p2;
			s=d2;
		}
	printf("%d %d",m,s);
}
