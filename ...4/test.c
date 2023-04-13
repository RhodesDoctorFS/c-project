#include <stdio.h>

int main(){
	int wei,x,n;
	int cishu;//wei是范围，x是当前判断的侯选数，n是除数，cishu是进行取余运算的次数，质数进行本身-2次运算后如果依然没有除尽则此数为质数。如果其中有除尽则不是质数。
	
	
	scanf("%d",&wei);
	printf("2");//弥补2会出现bug的情况，提前默认输出。
	
	for(x=3;x<=wei;x++){
	
		cishu=0;
		
		for(n=2;n<x;n++)
          {
               
          if (x%n==0)
               {
                    break;
               }else{
                    cishu ++; 
			   }
			   if (cishu==x-2)
			   {
				printf("%d\n",x);
			   }
			   
		}
	}
	
	
	return 0;
}
	



