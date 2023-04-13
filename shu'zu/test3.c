#include <stdio.h>
long long max(long long,long long);
int main()
{   
    int N;
    scanf("%d",&N);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    long long sum=0;
    if (N==1)
        {
            sum=a[0];
        }
    for (int i = 0; i < N-1; i++)
    {   
        
        sum+=max(a[i],a[i+1]);
    }
    printf("%d",sum);

     return 0;
}

long long max(long long int c,long long int d)
    {    
        long long int a;
        a=c>d?c:d; 
        return a;       
    }