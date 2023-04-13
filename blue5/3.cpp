#include <bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int>> minq;
priority_queue<int> maxq;
int N;
int a;
unsigned int find()
{
    int b,c;
    unsigned int minn=-1;
    while (!maxq.empty())
    {
        b=maxq.top();
        maxq.pop();
        if (maxq.empty()==false)
        {
            c=maxq.top();
        }else return minn;
        if (b-c<minn)
        {
            minn=(b-c);
        }
    }
    return minn;
    
}
int main()
{
    cin>>N;
    for (int i = 0; i <N; i++)
    {
        cin>>a;
        minq.push(a);
        maxq.push(a);
    }
    int maxx,minn,min2;
    minn=minq.top();
    maxx=maxq.top();
    int ans;
    ans=(maxx-minn)/find()+1;
    cout<<ans;
}