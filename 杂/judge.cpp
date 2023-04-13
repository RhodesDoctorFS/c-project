#include<iostream>

using namespace std;
struct card1
{
    char name;
    int num;
};
void tell(card1*);
void OUT(string,card1*);
int main()
{
    system("chcp 65001");
    while (1)
    {
        cout<<"**********新的一局开始************\n";
        card1 a[15]=
        {
        {'3',4},
        {'4',4},
        {'5',4},
        {'6',4},
        {'7',4},
        {'8',4},
        {'9',4},
        {'X',4},
        {'J',4},
        {'Q',4},
        {'K',4},
        {'A',4},
        {'2',4},
        {'B',1},
        {'S',1},
        };
        cout<<"请输入你所拥有的手牌数量\n";
        for (int i = 0; i < 15; i++)
        {
            if (a[i].name=='X')
            cout<<"10"<<":"<<endl;
            else if (a[i].name=='B')
            cout<<"大王"<<":"<<endl;
            else if (a[i].name=='S')
            cout<<"小王"<<":"<<endl;
            else           
            cout<<a[i].name<<":"<<endl;
            int n;
            cin>>n;
            a[i].num-=n;
        }
        tell(a);
        string out;
        while (1)
        {
            cout<<"请输入对手打出的牌(大王用B表示，小王用S表示：";
            cin>>out;
            OUT(out,a);
            tell(a);
            cout<<"本局是否结束？(Y/N)\n";
            char end;
            cin>>end;
            if (end=='Y')
            {
                cout<<"**********本局结束************\n";
                break;
            }
        }
    }
     return 0;
}

void tell(card1* a){
    cout<<"对手拥有的牌:"<<endl;
    for (int i = 0; i < 15; i++)
    {
        if (a[i].name=='X')
            cout<<"10"<<":"<<a[i].num<<endl;
            else if (a[i].name=='B')
            cout<<"大王"<<":"<<a[i].num<<endl;
            else if (a[i].name=='S')
            cout<<"小王"<<":"<<a[i].num<<endl;
            else           
            cout<<a[i].name<<":"<<a[i].num<<endl; 
    }
}


void OUT(string out,card1* a){
    for (int i = 0; i < 15; i++)
    {
        for (auto p=out.begin();p!=out.end();p++)
        {
            if (*p==a[i].name)
            {
                a[i].num--;
            }           
        }       
    }
}
