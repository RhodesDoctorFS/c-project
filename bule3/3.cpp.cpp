#include<bits/stdc++.h>
using namespace std;
bool a[20210507];
int maxx=52050542;
void shai(){
    for (int k = 2; k*k<maxx; k++)
    {
    for (int i = k; i <20210507; i++)
    {
        if (i%k==0&&i!=k)
        {
            a[i]=1;

        }else
        {
            
            maxx=i;
        }
    }
    }
}
int main(){
    
    shai();
    for (int i = 2; i <100; i++)
    {
        if (a[i]==0)
        {
            cout<<i<<endl;
        }
        
    }
    
    int ans=0;
    
    for (int i = 2; i <20210507; i++)
    {
        if (a[i]==0)
        {
            int wei=i;
            int jugdge=0;
            while (wei!=0)
            {
                if(a[wei%10]!=0||wei==0||wei==1){
                    jugdge=1;
                }
                wei/=10;
            }
            if (jugdge!=1)
            {
                ans++;
            }
        }
    }
    cout<<ans;
}