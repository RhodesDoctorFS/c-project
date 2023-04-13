#include <stdio.h>

int main()
{
    int sum;
    int x;
    int i;
    while (scanf("%d",&x)!=EOF)
    {   
        
        do
        { 
            i=x;
            i%=10;
            sum+=i;
            x/=10;
            sum*=10;
        } while (x!=0);
        sum/=10;

        do
        {
            int d =sum%10;
            printf("%d",d);
            sum/=10;
            if (sum>0)
            {
                printf(" ");
            }
            
        } while (sum!=0);
        
        
    }
    


     return 0;
}
