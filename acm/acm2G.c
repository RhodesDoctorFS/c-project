#include <stdio.h>

int main()
{   
    int N;
    double x=1;
    int a=1;
    double sum=0;
    

    while (scanf("%d",&N)!=EOF)
    {   
        for (int i = 0; i < N; i++)
        {   
            int n;
           scanf("%d",&n);
           for (int b = 0; b < n; b++)
           {
            sum+=a/x;
            x++;
            a*=-1;
           }
            printf("%.2f\n",sum);
            sum=0;
            x=1;
            a=1;
        }
        
    }
    





     return 0;
}