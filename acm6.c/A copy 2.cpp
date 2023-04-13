#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
     
     int H,W;
     scanf("%d%d",&H,&W);
     vector <string> a(H);
     vector <string> b(H);
     for (int i = 0; i < H; i++)
     {
          cin>>a[i]; 
     }
     for (int i = 0; i < H; i++)
     {
          cin>>b[i];
     } 
     for (int i = 0; i < H; i++)
     {
          if(count(a[i].begin(),a[i].end(),'#')!=count(b[i].begin(),b[i].end(),'#'))
          {
               printf("No");
               goto end;
          }     
     }
     printf("Yes");
end:     return 0;
}