#include<iostream>

using namespace std;
int main()
{
    double m,n;
    cin>>m>>n;
    double BMI;
    BMI=m/(n*n);
    if (BMI<18.5)
    {
        cout<<"Underweight";
    }else if (BMI>=18.5&&BMI<24)
    {
        cout<<"Normal";
    }else if (BMI>=24)
    {
        cout<<BMI<<"\n"<<"Overweight";
    }
     return 0;
}