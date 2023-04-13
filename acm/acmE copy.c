#include <stdio.h>

int main()
{    int N;
     double a=0;
     int FS=0,ZS=0,LING=0;     
     while(scanf ("%d",&N)!=EOF)
{    
     if (N==0)
     {
          break;
     }
     for (int i =0; i <N; i++)
     {    
          scanf("%lf",&a);
          if (a==0)
          {
               LING++;
          }
          if (a>0)
          {
               ZS++;
          }
          if (a<0)
          {
               FS++;
          }                
     }
      printf("%d %d %d\n",FS,LING,ZS);
      FS=LING=ZS=0;
}
     
     return 0;
}