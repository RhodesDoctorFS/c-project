#include <stdio.h>
#include<string.h>

int main()
{
    char a[30];
    int count=0;
    int cnt=0;
    printf("请输入一行英文句子：");
    gets(a);
    for (int i = 0; a[i]!=0; i++)
    {
        if (a[i]==' ')
        {
            cnt=0;
        }else if(cnt==0)
        {
            cnt=1;
            count++;
        }      
    }
    printf("在这个句子里面有%d个单词",count);
    return 0; 
}