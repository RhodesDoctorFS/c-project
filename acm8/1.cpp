#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while (1)
    {                    
    string name;
    start:cin>>name;
        string name1,name2,name3;
        
        for (auto p1=name.begin();p1!=name.end()-2;p1++)
        {
            for (auto p2=name.begin()+1;p2!=name.end()-1;p2++)
            {
                for (auto p3=name.begin()+2;p3!=name.end();p3++)
                {
                    auto p=p1;
                    while (p!=p2)
                    {
                        name1+=*p;
                        p++;
                    }
                    while (p!=p3)
                    {
                        name2+=*p;
                        p++;
                    }
                    while (p!=name.end())
                    {
                        name3+=*p;
                        p++;
                    }
                    p=name.begin();
                    auto P1=name1.begin();
                    auto P2=name2.begin();  
                    auto P3=name3.begin();
                                                            
                }            
            }
            cout<<":(";
            if (count==n)
            {
                goto end;
            }
        }   
    }
end:    return 0;
}