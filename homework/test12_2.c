#include <stdio.h>

int main()
{
    int A[10]={2,3,5,7,8,10,12,15,19,21};
    int n;
    scanf("%d",&n);
    int right=9;
    int left=0;
    int mid=(left+right)/2;
    
    while (left<=right)
    {
        if (n==A[mid])
        {
            printf("%d",mid+1);
            goto end;
        }else if (n<A[mid])
        {
            right=mid-1;
            mid=(left+right)/2;
        }else if (n>A[mid])
        {
            left=mid+1;
            mid=(left+right)/2;
        }       
    }
    printf("没找到QAQ");
end:     return 0;
}
