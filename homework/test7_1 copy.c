#include <stdio.h>

int main()
{
     int N[5]={1,2,3,4,5};
     int x=0;
     scanf("%d",&x);
     int low=0 ,high=4 ,mid=2;
     while (low>=high)
     {
          mid=(low+high)/2;
          if (x>N[mid])
          {
               low=mid+1;
          }else if (x<N[mid])
          {
               high=mid-1;
          }
          else
          {
               break;
          }                
     }
     if (low>high)
     {
          printf("查找失败");
     }else
     {
          printf("查找成功，在第%d个单元处",mid+1);
     }
     
     

     return 0;
}