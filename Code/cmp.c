#include <stdio.h>
#include <string.h>

int main()
{
    char G [] ="中文";
    char g [12] ={0};
    gets(g);    
    if (strcmp(G,g)==0)
    {
        printf("正确");
    }else
    {
        printf("NO");
    }
    
     return 0;
}