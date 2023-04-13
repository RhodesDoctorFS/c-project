#include<stdio.h>
int main ()
{
	int a,b,c,sum=0,i;
	scanf("%d%d%d",&a,&b,&c);
	for(i=1;i<=a;i++)
	{
		if(b<2*i||c<4*i)
		{
			break;
		}
		else
		sum=i*7;
	}
	printf("%d",sum);
}
