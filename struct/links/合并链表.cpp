#include <bits/stdc++.h>
using namespace std;
struct Node//单向链表
{
    int date;
    Node* next;
};
Node* head1=NULL;
Node* head2=NULL;//链表头
int main()
{
    Node h1[101],h2[101];
    int n1,n2;
    cin>>n1>>n2;
    for (int i = 1; i <=n1; i++)
    {
        cin>>h1[i].date;
        if (head1==NULL)
        {
            h1[i].next=head1;
            head1=&h1[i];
        }else
        {
            h1[i].next=h1[i-1].next;
            h1[i-1].next=&h1[i];
        }
        
    }
    for (int i = 1; i <=n2; i++)
    {
        cin>>h2[i].date;
        if (head2==NULL)
        {
            h2[i].next=head2;
            head2=&h2[i];
        }else
        {
            h2[i].next=h2[i-1].next;
            h2[i-1].next=&h2[i];
        }        
    }


    //合并操作
    Node h3[202];
    Node* p=NULL;
    int i=1;
    Node*p1=&h1[1],*p2=&h2[1];
    for (  ;p1!=NULL&&p2!=NULL; )
    {
        if (p1->date>=p2->date)
        {   
            if (p==NULL)
            {
                h3[i].date=p2->date;
                h3[i].next=p;
                p=&h3[i];
                p2=p2->next;
            }else
            {
                h3[i].date=p2->date;
                h3[i].next=h3[i-1].next;
                h3[i-1].next=&h3[i];
                p2=p2->next;
            }            
        }else
        {
            if (p==NULL)
            {
                h3[i].date=p1->date;
                h3[i].next=p;
                p=&h3[i];
                p1=p1->next;
            }else
            {
                h3[i].date=p1->date;
                h3[i].next=h3[i-1].next;
                h3[i-1].next=&h3[i];
                p1=p1->next;
            }
        }  
        i++;      
    }
    if (p1!=NULL)
    {
        for (;p1!=NULL;p1=p1->next)
        {
            h3[i].date=p1->date;
            h3[i].next=h3[i-1].next;
            h3[i-1].next=&h3[i];
        }
        
    }else if (p2!=NULL)
    {
        for (;p2!=NULL;p2=p2->next)
        {
            h3[i].date=p2->date;
            h3[i].next=h3[i-1].next;
            h3[i-1].next=&h3[i];
        }
    }
    for (;p!=NULL;p=p->next)
    {
        cout<<p->date;
    }
    
}
