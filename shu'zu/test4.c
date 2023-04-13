#include <stdio.h>

void main(){
	int n,i=0,sum=0,x=0;
	double average;
	
	scanf("%d\n",&n);
	
	int number[n];
	
	for(;i<=n-1;i++){
		scanf("%d",&x);
		sum+=x;
		number[i]=x;
	}
	
	average=1.0*sum/n;
	printf("%.2f\n",average);
	
	
	int z=0;
	for(;z<=n-1;z++){
		if(number[z]>average){
			printf("%d ",number[z]);
		}
	}

}