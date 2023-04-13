#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[50][50];
    int n,m;
    cin>>n>>m;//输入点数和边数
    for (int i = 1; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=a[y][x];//无向简单图
    }
}