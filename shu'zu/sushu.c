#include <stdio.h>

int main(){
	int x,n,wei;	
	scanf("%d",&wei);	
	for(x=2;x<=wei;x++){		
		for(n=2;n<x;n++){			
			if(x%n==0){
				break;
			}
		}
		if(n>=x){
			printf("%d\n",x);
		}
	}	
	return 0;
}