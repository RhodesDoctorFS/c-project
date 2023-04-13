#include<stdio.h>

int main()
{
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h,i;
while(scanf("%d%d%d",&a,&b,&c)!=EOF)
{f=b-1;
g=f*31+c;
d=a/4;
e=a-d*4;
i=h+1;
/*printf("%d\n",e);*/
if(b<3){printf("%d\n",g);}
else if(b=3){h=g-3;}
else if(b<6){h=g-4;}
else if(b<9){h=g-5;}
else if(b<11){h=g-6;}
else if(b<13){h=g-7;}
{if(e!=0){printf("%d%d\n",e,h);}
else{printf("%d%d\n",e,i);}}
}   return 0;
}