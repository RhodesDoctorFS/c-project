#include<bits/stdc++.h>
#define lli long long int
using namespace std;
const int maxn =1001;
int test;
int s[maxn];
double inform[1001][3]={0,0,1};
int finalx,finaly;
void inita()
{
    for (int i = 1; i <= maxn; i++)
    {
        s[i] = i;
    }
}
int finda(int x)
{
    if (x != s[x])
    {
        s[x] = finda(s[x]);
    }
    return s[x];
}
void mergea(int x, int y)
{
    x = finda(x);
    y = finda(y);
    if (x != y)
    {
        s[x] = s[y];
    }
}
bool judgedis(lli x1,lli x2 ,lli y1,lli y2,lli r1,lli r2 ){
    if ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)<=(r1+r2)*(r1+r2))
    {
        return true;
    }
    else return false;
}
int solve(int index){
    if(finda(index)==finda(0)&&index!=-1){
        return 1;
    }
    else return 0;
    
}
int main()
{
    
    cin>>test;
    for (int i = 0; i <test; i++)
    {
        inita();
        cin>>finalx>>finaly;
        int n;
        cin>>n;
        for (int j = 1; j <=n; j++)
        {
            cin>>inform[j][0]>>inform[j][1]>>inform[j][2];
        }

        for (int i = 0; i <n; i++)
        {
            for (int j = i+1; j <=n; j++)
            {
                if (judgedis((lli)inform[i][0],(lli)inform[j][0],(lli)inform[i][1],(lli)inform[j][1],(lli)inform[i][2],(lli)inform[j][2]))
                {
                    mergea(i,j);
                }          
            }         
        }
        int index=-1;
        for (int i = 0; i <=n; i++)
        {
            if (judgedis((lli)inform[i][0],(lli)finalx,(lli)inform[i][1],(lli)finaly,(lli)inform[i][2],0)){
                index=i;
                break;
            }
        }    
        cout<<solve(index)<<endl;      
    }
    
       
       
    return 0;
}