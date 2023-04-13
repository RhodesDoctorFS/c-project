#include <stdio.h>
struct student
{
    int num;
    int grade;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct student a[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&a[i].num,&a[i].grade);
    }
int max=a[0].grade;
int index=0;
    for (int i = 1; i < n; i++)
    {
        if (a[i].grade>max)
        {
            index=i;
        }
        
    }
    printf("%d %d\n",a[index].num,a[index].grade);
     return 0;
}