#include <stdio.h>
#include<string.h>
struct student1
{
    char c[10];
    int number;
    char name[10];
    char add[30];
};
void print(struct student1);
int main()
{   
    printf("班级\t学号\t姓名\t家庭住址\n");
    struct student1 a={"20大3",1001,"高佳佳","东兴南路30号"};
    struct student1 b={"20大4",1002,"李明","豫竹南路83号"};
    struct student1 c={"20大5",1003,"吴磊","鸿基王朝A栋19号"};
    print(a);
    print(b);
    print(c);
    return 0;
}
void print(struct student1 a){
    printf("%s\t%d\t%s\t%s\n",a.c,a.number,a.name,a.add);
};