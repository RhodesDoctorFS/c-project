#include <stdio.h>

int main()
{
 int a[5]={0};
 int j,t,count;
 for(j=0;j<5;j++){
 scanf("%d",&a[j]);
}
  
  int min=a[0];
 for(j=0;j<5;j++)
 {
  if(min>a[j])
  {
   min=a[j];
   count=j;
 }
   /* }for(j=0;j<5;j++){
    if(a[j]==min){
      a[j]=a[0];
      a[0]=min;
  }*/
 }
  a[count]=a[0];
  a[0]=min;
 for(j=0;j<5;j++){
     printf("%d ",a[j]);
 }
 
 return 0;
}