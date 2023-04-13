#include<iostream>

using namespace std;
int main()
{
     int week[7][2];
     for (int i = 0; i < 7; i++)
     {
          for (int j = 0; j < 2; j++)
          {
               cin>>week[i][j];
          }
     }
     int max=week[0][0]+week[0][1];
     int index=1;
     for (int i = 1; i < 7; i++)
     {
          if (week[i][0]+week[i][1]>max)
          {
               max=week[i][0]+week[i][1];
               index=i+1;
          }
     }
     if (max<=8)
     {
          cout<<"0";
     }else
     {
          cout<<index;
     }
     return 0;
}