#include <stdio.h>
int main()
{
    int a[100][20]={0};
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }       
    }
    int temp;
    for (int i = 0; i < n; i++)//控制一行的冒泡
    {
        for (int j = m-1; j>=0 ; j--)//m：数组元素量，j：下标指向最后一个元素
        {
            for (int k = 0; k <j ; k++)//k:指向第一个元素
            {
                if (a[i][k]>a[i][k+1])
                {
                    temp=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=temp;
                }                
            }           
        }      
    }
    temp=0;
    double b[101]={0};
    for (int i = 0; i <n; i++)
    {
        int sum=0;
        for (int j = 1; j< m-1; j++)
        {
            sum+=a[i][j];            
        }
        b[i]=(double)sum/(m-2);       
    }
    double max=b[0];
    for (int i = 0; i < n-1; i++)
    {
        if (max<b[i+1])
        {
            max=b[i+1];
        }     
    }  
    printf("%.2f",max);
    return 0;
}
