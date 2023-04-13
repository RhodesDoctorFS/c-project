#include <stdio.h>
struct student
{
    char a[10];
    char name[20];
    int eng;
    int pro1;
    int pro2;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct student b[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%d%d%d",b[i].a,b[i].name,&b[i].eng,&b[i].pro1,&b[i].pro2);
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (b[i].eng>=60)
        {
            count++;
        }
    }
    printf("%d",count);
     return 0;
}