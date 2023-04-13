#include <stdio.h>
void changenoob(int,int);
void changeYES(int*,int*);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    changenoob(a,b);
    printf("a:%d,b:%d\n",a,b);
    changeYES(&a,&b);
    printf("a:%d,b:%d",a,b);
    return 0;
}
void changenoob(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void changeYES(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}