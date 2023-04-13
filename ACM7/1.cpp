#include<iostream>

using namespace std;
int main()
{
    int H,W;
    int count=0;
    cin>>H>>W;
    char a[11][11];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin>>a[i][j];
        }   
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j< W; j++)
        {

            if (a[i][j]=='#')
            {
                count++;
            }
        }
    }
    cout<<count;
     return 0;
}
