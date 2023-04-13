#include <stdio.h>

int main()
{
     char zimu[100]={0};
     int countA=0,counta=0;
     while (scanf("%s",zimu)!=EOF)
     {
          for (int i = 0; i < 100; i++)
          {
               if (zimu[i]<91&&zimu[i]>=65)
               {
                    countA++;                   
               }else if(zimu[i]>=97&&zimu[i]<=122)
               {
                    counta++;
               }               
          }
          if (countA>counta)
          {
               for (int i = 0; i < 100; i++)
               {
                    if (zimu[i]>=97&&zimu[i]<=122)
                    {
                         zimu[i]-=32;
                    }                   
               }
               
          }
          else
          {
               for (int i = 0; i < 100; i++)
               {
                    if (zimu[i]<91&&zimu[i]>=65)
                    {
                         zimu[i]+=32;
                    }                   
               } 
          }
          printf("%s",zimu);
          countA=0;
          counta=0;
          for (int i = 0; i < 100; i++)
          {
               zimu[i]=0;
          }                
     }
     return 0;
}