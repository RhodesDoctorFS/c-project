#include <stdio.h>

int main()
{
   int a=3-1,b=1-5,c=1*1-5*3;
   int p1x,p1y,p2x,p2y;
   int result=0;
   int judgement1,judgement2;
   int judge1,judge2;
   scanf("%d %d %d %d",&p1x,&p1y,&p2x,&p2y);
   judge1=(a*p1x+b*p1y>c);
   judge2=(a*p2x+b*p2y>c);
   judgement1=a*p1x+b*p1y;
   judgement2=a*p2x+b*p2y;
   if (judgement1==c||judgement2==c)
   {
        printf("on");
   }else
   {
    if (judge1=judge2)
    {
        printf("yes");
    }else
    {
        printf("no");
    }  
   }
     return 0;
}