#include<iostream>
using namespace std;
struct zhan 
{
    string clothname[1001];
    int top=0;
    int snow=0;
}pile;
int number=0;
void inzhan(string a){
    pile.clothname[++pile.top]=a;
    if (a=="snowcoat")
    {
        pile.snow=pile.top;
    }
}
void getcloth(){
    if (pile.top<=0)
    {
        cout<<"empty";
    }else
    {
        cout<<pile.clothname[pile.top];
        pile.top--;
    }
}
void getsnow(){
    if (number==0)
    {
        cout<<"oopsimcold :(";
    }else
    {
        cout<<"winner winner chicken dinner :)";
        while (pile.snow!=pile.top)    
        {
            pile.clothname[pile.snow]=pile.clothname[pile.snow+1];
            pile.snow++;
        }
        pile.snow=0;
        number--;
        pile.top--;
    } 
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string commond;
        cin>>commond;
        if (commond[0]=='p')
        {
            string name;
            cin>>name;
            inzhan(name);
        }
        if (commond[0]=='g')
        {
            getcloth();
        }
        if (commond[0]=='i')
        {
            getsnow();
        }
    }
    return 0;
}