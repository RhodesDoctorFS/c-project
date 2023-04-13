#include <bits/stdc++.h>
using namespace std;
double Data[26];
int n;
double Range;
double NCha;
double AUN;
void range(double* Data)
{
    double sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=Data[i];
    }
    
    Range=sum/(double)n;
    Range/=20;//迈克尔逊实验
    printf("%.5lf\n",Range);
}
void formalcha(double* Date)//标准差
{
    double total=0;
    for (int i = 1; i <= n; i++)
    {
        total+=pow(Data[i]-Range,2);
    }
    NCha=3*sqrt(total/(n-1));
    cout<<NCha<<endl;
}
void Aunkwon(double* Date){
    double total=0;
    for (int i = 1; i <= n; i++)
    {
        total+=pow(Data[i]-Range,2);//迈克尔逊实验data也得除以20
    }
    AUN=sqrt(total/((n-1)*n));
    cout<<AUN<<endl;
};//A类不确定度
int main(){
    char a;
    while (a!='6')
    {
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            cin>>Data[i];
        }
        range(Data);
        formalcha(Data);
        Aunkwon(Data);
        cout<<"结束请输入6,输入任意数以继续";
        cin>>a; 
    }
}