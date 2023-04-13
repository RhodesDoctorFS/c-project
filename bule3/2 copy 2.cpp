#include <bits/stdc++.h>
using namespace std;
int x,y;
int total;
int ans=0;
int main(){
    for (int i =1; i <=4; i++)
    {
        for (int j =1; j <=4; j++)
        {
            total=i*j;
            if (total<=16)
            {
                ans++;
            }
            
        }
        
    }
    cout<<ans;
}
