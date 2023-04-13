#include<iostream>

using namespace std;
int main()
{
    int apple;
    cin>>apple;
    if (apple<1)
    {
        printf("Today, I ate 0 apple.");
    }else if(apple==1)
    {
        printf("Today, I ate 1 apple.");
    }else if (apple>1)
    {
        printf("Today, I ate %d apples.",apple);
    }
     return 0;
}