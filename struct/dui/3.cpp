#include<bits/stdc++.h>
using namespace std;
int index=0;
const int maxn=100000;
struct dui
{
    int v;
    int pos;
}money1[maxn+1],money2[maxn+1];
int sets1[maxn+1];
void up(int x){
    while (x!=1&&money1[x/2].v>money1[x].v)
    {
        swap(money1[x/2],money1[x]);
        sets1[money1[x].pos]=x;
        sets1[money1[x/2].pos]=x/2;//逻辑：money1现在这个位置x/2的编号=（money1[x/2].pos），这个编号的人现在所处位置是x/2
        index/=2;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        money1[i].v=100;
        money1[i].pos=i;
        sets1[i]=i;
        index++;
        up(index);
    }
    for (int i = 0; i < m; i++)
    {
        int judge;
        cin>>judge;
        if (judge==1)
        {
            int p,x;
            cin>>p>>x;
            money[p]
        }
        
    }
    
    
}