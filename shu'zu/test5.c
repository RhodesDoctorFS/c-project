#include <stdio.h>

int main(){
	int i=0,sum=0,x=0;
	double average;
	int number[100];
		for(;;i++){
		scanf("%d",&x);
		number[i]=x;
		sum+=x;
		char c;
		c= getchar();
		if (c==-1)
		{
			break;
		}
		
		
	}
	
	average=1.0*sum/(i+1);
	
	printf("%f",average);
	
	int z=0;
	for(;z<=i;z++){
		if(number[z]>average){
			printf("%d\n",number[z]);
		}
	}
	
	return 0;
	
}