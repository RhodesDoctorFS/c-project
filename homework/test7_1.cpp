#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{    
     int x,low,high,mid;
     low=0;
     high=4;
    
     cout<<"请输入查找目标"<<endl;
     cin>>x;
     int N[5]={1,2,3,4,5};  
     while (low<=high)
     {
          mid=(high+low)/2;
          if (x<N[mid])
          { 
               high=mid-1;
          }else if(x>N[mid])
          {
               low=mid+1;
          }else
          {
               break;
          }          
     }
     if (low>high)
     {
          cout<<"查找失败"<<endl;
     }else
     {
          cout<<"查找成功"<<endl;
     }     
     return 0;
}