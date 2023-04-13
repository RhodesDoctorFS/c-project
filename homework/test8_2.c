#include <stdio.h>

int main()
{
    int countA=0,counta=0,countspace=0,countnum=0;
    char a;
    while (1)
    {
        scanf("%c",&a);
        if (a>=65&&a<=91)
        {
            countA++;
        }else if (a>=97&&a<=122)
        {
            counta++;
        }else if (a==32)
        {
            countspace++;
        }else if (a>48&&a<=57)
        {
            countnum++;
        }else if (a=='0')
        {
            break;
        }
    }
    printf("A:%d,a:%d,space:%d,num:%d",countA,counta,countspace,countnum);
     return 0;
}