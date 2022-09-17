#include<stdio.h>
	struct date
	{
		int year;
		int month;
		int day;
	};
struct date c[2];
int main ()
{
	int y,m,d;
    while(scanf("%d%d%d%d%d%d",&c[0].year,&c[0].month,&c[0].day,&c[1].year,&c[1].month,&c[1].day)!=EOF)
	{
		y=c[1].year-c[0].year;
		m=c[1].month-c[0].month;
		d=c[1].day-c[0].day;
		if(m==0)
		{
			   if(d>=0)
				 printf("%d\n",y);
			    else
				 printf("%d\n",y-1);
		}
		if(m>0)
			printf("%d\n",y);
		if(m<0)
			printf("%d\n",y-1);
	}
return 0;
}

