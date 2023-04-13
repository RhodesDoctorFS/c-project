#include <stdio.h>
#include <ctype.h>
int main()
{
    int A=0,aa=0,space=0,number=0,other=0;
    char a[3][10]={0};
    for (int i = 0; i < 3; i++)
    {
        gets(a[i]);
    }
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j< 10; j++)
        {  
            if (islower(a[i][j])!=0)
            {
                aa++;
            }else
            if (isupper(a[i][j])!=0)
            {
                A++;
            }else
            if (a[i][j]==32)
            {
                space++;
            }else
            if(isdigit(a[i][j])!=0)
            {
                number++;
            }else
            {
                other++;
            }          
        }      
    }
    printf("有%d个大写，%d个小写，%d个数字，%d个空格，%d个其他字符",A,aa,number,space,other);
     return 0;
}