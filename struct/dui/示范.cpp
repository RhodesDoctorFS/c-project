#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;
int dui[maxn+1];
int index=0;
void insert(int x)//小根堆
{
    dui[++index]=x;
    Up(index);
}
void del_top()//小根堆
{
    swap(dui[1],dui[index]);
    index--;
    down(1);
}
void del(int x)//小根堆
{
    if (x==index)
    {
        dui[index]=0;
        index--;
        return;
    }
    swap(dui[x],dui[index]);
    index--;
    if (index>x)
    {
        down(x);
    }else
    {
        Up(x);
    }  
}

void down(int x)//小根堆
{
    while (2*x<=index)
    {
        int min_son=2*x;
        if (min_son+1<=index&&dui[min_son]>dui[min_son+1])
        {
            min_son++;
        }
        if (dui[x]>dui[min_son])
        {
            swap(dui[x],dui[min_son]);
            x=min_son;
        }else
        {
            break;
        }
    }
}
void Up(int index)//小根堆
{
    while (index>1&&dui[index]<dui[index/2])
    {
       swap(dui[index],dui[index/2]);
       index/=2;
    }
}
void Up2(int index)//大根堆
{
    while (index>1&&dui[index]>dui[index/2])
    {
       swap(dui[index],dui[index/2]);
       index/=2;
    }
}
void down2(int x)//大根堆
{
    while (2*x<=index)
    {
        int max_son=2*x;
        if (max_son+1<=index&&dui[max_son]<dui[max_son+1])
        {
            max_son++;
        }
        if (dui[x]<dui[max_son])
        {
            swap(dui[x],dui[max_son]);
            x=max_son;
        }else
        {
            break;
        }
    }
}

priority_queue<int,vector<int>,greater<int>> minq;//小根堆
priority_queue<int> maxq;//大根堆