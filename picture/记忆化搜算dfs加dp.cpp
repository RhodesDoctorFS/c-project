#pragma GCC optimaze(1)
#pragma GCC optimaze(2)
#pragma GCC optimaze(3,"Ofast","inline")//手动吸氧 
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>
#include <limits.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<sstream>
#include<set>
#include<map>
#include<list> 
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;
const int N = 1e6 + 10;
int n,m;
int vis[31][31];
int dfs(int x,int y)
{
  if(x%2==1||y%2==1)
  {
  	if(vis[x][y])
  	  return vis[x][y];
  	if(x<n)
  	  vis[x][y]+=dfs(x+1,y);
  	if(y<m)
  	  vis[x][y]+=dfs(x,y+1); 
  }
  return vis[x][y];
}
int main()
{
	scanf("%d%d",&n,&m);
	vis[n][m]=n%2==1||m%2==1;
	printf("%d",dfs(1,1));
    return 0;
}
