#include <stdio.h>
#include <string.h>
int main()
{
    char password[10]={0};
    char right[10]="123456";
    char username[10]={0};
    scanf("%s",username);
back:    scanf("%s",password);
    if (strcmp(password,right)==0)
    {
        printf("Hello %s",username);
    }else
    {
        printf("Wrong Password!\n");
        for (int i = 0; i < 10; i++)
        {
            password[i]='0';
        }       
        goto back;
    }
     return 0;
}