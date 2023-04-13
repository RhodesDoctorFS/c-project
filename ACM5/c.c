#include <stdio.h>


int main()
{
    int user[100][2]={0};
    int n;
    scanf("%d",&n);
    int q;
    scanf("%d",&q);
    for (int i = 0; i < n; i++)
    {
        user[i][1]=i+1;
    }
    for (int i = 1; i <= q; i++)
    {
        if (getchar()==1)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            user[a][2]=user[b][1];
        }
        if (getchar()==2)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            user[b][2]=user[a][1];
        }
        if (getchar()==3)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            if (user[a][2]==user[b][1]&&user[b][2]==user[a][1])
            {
                printf("yes\n");
            }else
            {
                printf("no\n");
            }      
        }
    }
     return 0;
}
