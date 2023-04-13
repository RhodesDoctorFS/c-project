#include <stdio.h>

int main()
{
	printf("please input two time and I will caiculate the subtract of two data");
	
	int hour1,minute1;
	
	int hour2,minute2;
	
	
	scanf("%d %d",&hour1,&minute1);
	
	scanf("%d %d",&hour2,&minute2);
	
	
	int t1 = hour1 *60+ minute1;
	
	int t2 = hour2 *60+ minute2;
	
	
	int t = t1- t2;
	
	printf("the result is %d hours and %d minutes",t/60,t%60);
	
	return 0;
	
}
