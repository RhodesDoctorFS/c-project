#include <stdio.h>

int main()
{
    char zimu[10000]={0};
    int count=0;
    scanf("%s",&zimu);
    for (int i = 0; i <= 10000; i++)
    {
        if (zimu[i]==0)
        {
           break;
        }        
        if (zimu[i]=='A')
        {
            i++;           
            if (zimu[i]=='B')
            {
                count++;
                goto start;
            }                      
        }

         if (zimu[i]=='B')
        {
            i++;           
            if (zimu[i]=='A')
            {
                count++;
            }                      
        }
       start: if (count>=2)
        {
            printf("YES");
            break;
        }
        
    }
        if (count<2)
        {
            printf("NO");
        }

     return 0;
}
