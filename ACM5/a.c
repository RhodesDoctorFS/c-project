#include <stdio.h>

int main()
{
    int a[101]={0};
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int N=n;

    for (int i = 0; i <k ; i++)
    {
        for (int j = 0; j <N ; j++)
        {
            a[j]=a[j+1];
            
        }
        N--;        
    }    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
     return 0;
}
