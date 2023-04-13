#include <stdio.h>
int magic(int);


int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",magic(n));
     return 0;
}

int magic(int p){
    int count=0;
    do{
    if (p%2==0)
    {
        p/=2;
    }else
    {
        p=p*3+1;
    }
    count++;
    }while(p!=1);
    return count;
}