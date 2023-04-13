#include <stdio.h>

int min (int,int);

int main()
{   
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int sum=0;
    sum=min(a,e)+min(b,f)+min(c,d);
    printf("%d",sum);
     return 0;
}

int min(int a ,int b){
    int c;
    c=a<b?a:b;
    return c;
}