#include <stdio.h>
void sort(int*,int*);
int main()
{
    
    int a[100];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    /*printf("%p",&a[1]);*/
    int begin,end;
    printf("请输入要排序的起始位置和最后位置：\n");
    scanf("%d%d",&begin,&end);
    sort(&a[begin-1],&a[end-1]);
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
void sort(int*A,int*E){
    int*B=A+1;
    int temp;
    while (1)
    { 
        while (1)
        {
            if (*A>*B)
            {
                temp=*A;
                *A=*B;
                *B=temp;
                B++;
            }else
            {
                B++;
            }   
            if (B>E)
            {
                B=E;
                break;
            }             
        }
        A++;
        if (A==B)
        {
            break;
        }else
        {
            B=A+1;
        } 
    }
};  