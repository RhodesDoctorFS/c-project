#include <bits/stdc++.h>
using namespace std;
int cnt;
int one_num=2021;
int howmuch(int a){
    while (one_num!=0)
    {
        int wei=a;
        int b=0;
        while (wei!=0)
        {
            b=wei%10;
            if (b==1)
            {
                cnt++;
            }
            wei/=10;
        }
        one_num-=cnt;
        cnt=0;
        a++;
    }
    return a-1;  
}
int main(){
    cout<<howmuch(1);
}