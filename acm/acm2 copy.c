#include <stdio.h>

int main()
{   int N;
    int count=0;
    long long  A;
    long long  B;
    scanf("%d",&N);
    
    
    
    
    while (scanf("%d %d",&A,&B)!=EOF)
{   count ++;
    printf("%d\n",A+B);
    if (N==count)
    {
        break;
    }
    

    
}




     return 0;
}