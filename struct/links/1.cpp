#include <bits/stdc++.h>
using namespace std;
struct Node1//单向链表
{
    int date;
    Node1* next;
    
};
struct Node2//双向链表
{
    int date;
    Node2* prev;
    Node2* next;
};
Node1* head=NULL;//链表头
void inset(Node1*,Node1*);
void intset_first(Node1*);
void del(Node1* p,Node1* q);
int main(){
    Node1 a;
}
void inset(Node1* p,Node1* now)//在p节点前插入now
{
    now->next=p->next;
    p->next=now;
};
void intset_first(Node1* now)//now要作为第一个节点插入
{
    now->next=head;//now的下一个指针指向的是当前head指针指向的单元
    head=now;//head现在指向now
};
void del(Node1* p,Node1* q)//p本与now相连，现在与p相链接
{
    p->next=q;
};
void del_first(Node1* p)
{
    head=NULL;
}