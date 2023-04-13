#include<iostream>
#define maxsize 10//静态分配的表长最大值
#define sizestart 10//动态分配的表长的初始值
using namespace std;


struct sqlist//静态分配法定义一个int类型的顺序表
{
     int date[maxsize];
     int length;
};

void initlist(sqlist &b){//初始化一个静态分配的线性表
     for (int i = 0; i <maxsize ; i++)
     {
           b.date[i]=0;//所有元素重置为0
     }
     b.length=0;//表长设置为0
}

struct sqlist2//动态分配法定义一个int类型的顺序表
{
     int* date2;//指向即将动态分配的数组
     int max;//顺序表最大容量
     int length2;//顺序表当前长度
};

void initlist2(sqlist2 &b){//初始化一个动态分配的线性表
     b.date2=(int*)malloc(sizestart*sizeof(int));//动态分配
     b.length2=0;//表长设为0
     b.max=sizestart;//最大容量等于初始容量
}





int main()
{
     sqlist a;//静态分配的
     initlist(a);
     sqlist2 b;//动态分配的
     initlist2(b);


     return 0;
}
