#include <stdio.h>

int main()
{   int grade;

    printf("请输入成绩：");
    scanf("%d",&grade);
    printf("您的成绩是%d\n",grade);
    int grade2;
    grade2 =grade/10;
    if (grade2>=9)
    {
        printf("您的评级是A");
    }else 
        switch (grade2)
    {
    case 8:
        printf("您的评级是B");
        break;
    case 7:
        printf("您的评级是C");
        break;
    case 6:
        printf("您的评级是D");
        break;
    
    default:
        printf("您的评级是E，建议remake呢亲");

        break;
    }



     return 0;
}