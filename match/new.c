#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,x1,x2,d,e;
	double f;
	f=b*b-4.00*a*c;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(f==0){
		x2=x1=(-b+sqrt(b*b-4.00*a*c))/(2.00*a);
		printf("x1=x2=%.5f",x1);
	}else if(f>0){
		x1=(-b+sqrt(b*b-4.00*a*c))/(2.00*a);
		x2=(-b-sqrt(b*b-4.00*a*c))/(2.00*a);		
		printf("x1=%.5f;x2=%.5f", x1,x2);
	}else{
		d=-b/(2.00*a);
		e=sqrt(b*b-4.00*a*c)/(2.00*a);
		printf("x1=%.5f+%.5fi  x2=%.5f-%.5fi", d, e, d, e);
	}
	return 0;
}
