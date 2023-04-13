#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
     int n, t[50], q[3]={0}, temp, y = 1, k = 0;
     scanf("%d", &n);
     for (int i = 0; i < n; i++)
     scanf("%d", &t[i]);
  
 
     for (int i = n-1; i >0; i--)
 {
      for (int j = 0; j <=i-1; j++)
  {
     if (t[j] > t[j + 1])
   {
    temp = t[j]; t[j] = t[j + 1]; t[j + 1] = temp;
   }
  }
 }
 
 for (int i = 0; i <= n - 3; i++)
 {
  
  q[0] = t[i];
  k = 0;
  for (int j = i+1; j < n; j++)
  {
   if (t[j] != q[k] && t[j] - q[0] <= 2)
   {
    k++;
    q[k] = t[j];
   }
  }
  if (k == 2)
   break;
 }
 for (int i = 0; i < 3; i++)
 {
  if (q[i] == 0)
   y = 0;

 }

  
 if (y == 1)
  printf("YES");
 else
  printf("NO");




 return 0;

}