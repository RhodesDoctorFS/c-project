#include <stdio.h>
#include <math.h>
int main()
{
    int m,n;
    int count=0;
    int M;
    int SHU[4]={0};
    while (scanf("%d %d",&m,&n)!=EOF)
    {   
        if (m==n)
        {
            M=pow(m/100,3)+pow(m%10,3)+pow((m%100-m%10)/10,3);
            if (m==M)
            {
                SHU[count]=M;
                count++;
            }
            
        }else
        
        for (int i = m; i <= n; i++)
        {   
            M=pow(i/100,3)+pow(i%10,3)+pow((i%100-i%10)/10,3);
            if (i==M)
            {
                SHU[count]=M;
                count++;

            }

        }
        if (count==0)
        {
            printf("no\n");
        }else
        {
            for (int z = 0; z < count; z++)
            {
                if (z!=count-1)
                {
                    printf("%d ",SHU[z]);
                }else
                {
                    printf("%d\n",SHU[z]);
                }
                
                
            }
            
        }
        
        
        count=0;        
    }
    
     return 0;
}
