#include <stdio.h>

int main()
{    
     int n;
     scanf("%d",&n);                                                                   
     
          int t[50]={0};
          for (int i = 0; i < n; i++)
          {
               scanf("%d",&t[i]);
          }//循环输入数组
          int t2[3]={0};//用于储存选的球
          int min=0;//用于筛选球的大小差距
          int i;//用于数组处理
          for (i=0; i <n-2; i++)//当以第一个球为基准无法选出剩下两个球的时候将球库中的第二个球选中
          {    
               int count=0;//记录选了几个符合条件的球
               t2[0]=t[i];//先将所有球中的第一个球选中
               min=t2[0];//将第一个选中的球暂时记作最小值
               for (int j = i+1; j < n; j++)//筛选球库中剩下的球
               {
                    if (t[j]!=t2[0]&&t[j]!=t2[1]&&t[j]!=t2[2])//判断写入是否有重复
                    {
                         if ((t[j]>=min&&t[j]-min<=2)||(t[j]<=min&&min-t[j]<=2))//判断
                         {
                              t2[i]=t[j];
                              count++;
                              if (t2[i]<min)
                              {
                                   min=t2[i];
                              }              
                         }                                                                     
                    }                   
               }                                         
               if (count>=2)
               {
                    printf("YES");
                    goto END;                            
               }else
               {
                    for (int i = 0; i < 3; i++)
                    {
                         t2[i]=0;
                    }                   
               }              
          }
          printf("NO");         
END:     return 0;
}
//血泪史：6 4 2输入导致错误，只用min不行，顺序排列数组无可避免，思路问题
//血泪史：不要用变量定义数组大小，会导致申请数组过大导致野指针，本地没问题但是submit会出错
//知识点，将一个数组从无序变为有序：
/*for (int i = n-1; i >0; i--)
 {
      for (int j = 0; j <=i-1; j++)
  {
     if (t[j] > t[j + 1])
   {
    temp = t[j]; t[j] = t[j + 1]; t[j + 1] = temp;
   }
  }
 }*/
