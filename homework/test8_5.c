#include <stdio.h>
#include<math.h>
void prime(int);
int main()
{
    int a;
    scanf("%d",&a);
    prime(a);
     return 0;
}
void prime(int a){
    int i;
    for (i=2; i < sqrt(a); i++)
    {
        if (a%i==0)
        {
            break;
        }
    }
    if (i<=sqrt(a))
    {
        printf("%d不是素数",a);
        
    }else
    {
        printf("%d是素数",a);
    }
}