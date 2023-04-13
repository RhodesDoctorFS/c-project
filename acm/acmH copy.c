#include <stdio.h>

int main()
{    long long int n;
     long long int SUM=0;
     while (scanf("%lld",&n)!=EOF)
     {    SUM=(1+n)*n/2;
          printf("%lld\n\n",SUM);
     
     }
     
   
     return 0;
}
