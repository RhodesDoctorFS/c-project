#include <stdio.h>

int main()
{
    char code [15];
    scanf("%s",code);
    int sum=0;
    int identify=0;
    int cheng=1;
    for (int i = 0; i < 11; i++)
    {   
        if (code[i]!='-')
        {
            sum+=((code[i]-48)*cheng);
            cheng++;
        }     
    }
    identify=sum%11;
    if (code[12]=='X')
    {
        if (sum%11==10)
        {
            printf("Right");
        }else
        {
            code[12]=(sum%11)+48;
            printf("%s",code);
        }       
    }else
    {
        if (sum%11==code[12]-48)
        {
           printf("Right");
        }else if (sum%11==10)
        {
            code[12]='X';
             printf("%s",code);
        }else
        {
             code[12]=(sum%11)+48;
            printf("%s",code);
        }      
    }
     return 0;
}