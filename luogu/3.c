#include <stdio.h>
int runnian(int);
int main()
{
    int a=0,b=0,count=0,index=0;
    int c[1000]={0};
    scanf("%d %d",&a,&b);
    for (int i = a; i <=b; i++)
    {
        if (runnian(i)==1)
        {
            c[index]=i;
            index++;
            count++;         
        }        
    }
    printf("%d\n",count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ",c[i]);
    }       
     return 0;
}
int runnian(int i){
    if (i%4==0&&i%100||i%400==0)
    {
        return 1;
    }else
    {
        return 0;
    }
}