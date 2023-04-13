#include <stdio.h>

int main()
{
    int N;
    int a;
    int total=1;
    while (scanf("%d",&N)!=EOF)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&a);
            if (a%2!=0)
            {
                total*=a;
            }else if (a==1)
            {
                total*=a;
            }          
        }
        printf("%d\n",total);
        total=1;
        
    }
    

     return 0;
}