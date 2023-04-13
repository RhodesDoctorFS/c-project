#include<iostream>

using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int hour,min;
    hour=c-a;
    if (b>d)
    {   
        min=60-(b-d);
        hour--;
    }else
    {
        min=d-b;
    }
    if (min>=60)
    {
        min=0;
        hour++;
    }
    cout<<hour<<" "<<min;
     return 0;
}
