#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{   int a=40;
    char b[4];
    char c [4] = {'哥'};

    while (a)
{
    //system ("start ");//
    a-=1;
    if (a==30)
    {
        printf("叫哥就饶了你\n");
        scanf("%s",b);
        if (strcmp(b,c)==0)
        {   printf("算你识相");
            break;
        }else
        {
            printf("休怪我无情\n");
            a=40;
        }
        
        
    }
    

}




return 0;
}
