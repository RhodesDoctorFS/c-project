#include <bits/stdc++.h>
using namespace std;
struct Node//单向链表
{
    int date;
    Node* next;
};
Node* head=NULL;//链表头
int main(){
    Node a[81];
    
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&a[i].date);
        if (head==NULL||a[i].date<head->date)//判断是不是最小的数，是的话直接作头
        {                                      //注意判断顺序，优先判断NULL的情况
            a[i].next=head;
            head=&a[i];           
        }else
        {
            for (Node *p=head;p!=NULL;p=p->next)//链表的遍历,p作为指针遍历全部链表
            {
                if (p->date<a[i].date&&(p->next==NULL||p->next->date>a[i].date)) //注意判断顺序，优先判断NULL的情况
                {
                    a[i].next=p->next;
                    p->next=&a[i];
                    break;
                }
                
            }
            
        } 
    }
    for (Node *p=head;p!=NULL;p=p->next){
        cout<<p->date<<" ";
    }
}
