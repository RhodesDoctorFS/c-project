#include<bits/stdc++.h>

using namespace std;
struct point
{
    double x;
    double y;
};

int main()
{
    point A,B,C,D;
    cout<<"输入第一次和第二次落点的坐标"<<endl;
    cin>>A.x>>A.y>>B.x>>B.y;
    cout<<"输入第三次和第四次次落点的坐标"<<endl;
    cin>>C.x>>C.y>>D.x>>D.y;
    double x,y;
    if(D.x=!C.x&&A.x!=B.x){
        x=(D.x*C.y)/(D.x-C.x)-(C.x*D.y)/(D.x-C.x)+C.y*D.x-C.x*D.y-B.x*A.y/(B.x-A.x)+A.x*B.y/(B.x-A.x)-A.y*B.x+A.x*B.y;
        y=x*(B.y-A.y)/(B.x-A.x)+B.x*A.y/(B.x-A.x)-A.x*B.y/(B.x-A.x)+A.y*B.x-A.x*B.y;
    }
    cout<<x<<endl<<y;
    return 0;
} 