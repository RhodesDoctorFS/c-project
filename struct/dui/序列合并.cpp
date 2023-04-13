 #include<bits/stdc++.h>
using namespace std;
struct hip
{
    int b,k;
}dui[20001];//用结构题存储序列，只记录第一个数和序列差
int n;
int Index=0;
void Up(int index)//小根堆
{
    while (index>1&&dui[index].b < dui[index/2].b)
    {
       swap(dui[index],dui[index/2]);
       index/=2;
    }
}
void down(int x)//小根堆
{
    while (2*x<=Index)
    {
        int min_son=2*x;
        if (min_son+1<=Index&&dui[min_son].b>dui[min_son+1].b)
        {
            min_son++;
        }
        if (dui[x].b>dui[min_son].b)
        {
            swap(dui[x],dui[min_son]);
            x=min_son;
        }else
        {
            break;
        }
    }
}
int main()
{
    cin>>n;
    for (int i = 1; i <= n; i++)//将所有序列头记录在小根堆里
    {
        int ki,bi;
        cin>>ki>>bi;
        dui[i].k=ki;
        dui[i].b=bi;
        Index++;
        Up(i);
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)//每次输出根堆头，将序列下一项入堆
    {
       cout<<dui[1].b<<" ";
       dui[1].b+=dui[1].k;
       down(1);
    }
    
}