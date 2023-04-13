#include<iostream>

using namespace std;

int main()
{
    double cost,use;
    cin>>use;
    if (use<=150)
    {
        cost=use*0.4463;
    }else if (use>150&&use<=400)
    {
        cost=150*0.4463+(use-150)*0.4663;
    }else if (use>400)
    {
        cost=150*0.4463+(400-150)*0.4663+(use-400)*0.5663;
    }
    printf("%.1lf",cost);

     return 0;
}