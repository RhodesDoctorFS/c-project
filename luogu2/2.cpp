#include<iostream>

using namespace std;
int main()
{
    int kind[3][2];
    int n;
    cin>>n;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<2; j++)
        {
            cin>>kind[i][j];
        }   
    }
        int min;
    for (int i = 0; i < 3; i++)
    {
        int cost=0,num=0;
        while (num<n)
        {
            cost+=kind[i][1];
            num+=kind[i][0];
        }if (i==0)
        {
            min=cost;
        }else if (cost<min)
        {
            min=cost;
        }
        
    }
    cout<<min;
     return 0;
}