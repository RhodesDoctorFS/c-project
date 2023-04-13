#include <stdio.h>

int main()
{   int grade;

    
    while(scanf("%d",&grade)!=EOF)
   { 
    int grade2;
    grade2 =grade/10;
    if (grade>100)
    {
        printf("Score is error!\n");
        
    }else if (grade<0)
    {
        printf("Score is error!\n");
    }
    
    
       else if (grade2>=9)
    {
        printf("A\n");
    }else 
        switch (grade2)
    {
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    
    default:
        printf("E\n");

        break;
    }
   }


     return 0;
}