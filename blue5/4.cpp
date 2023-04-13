#include <bits/stdc++.h>
using namespace std;
const int day = 24 * 60 * 60;
const int hour = 60 * 60;
const int minutes = 60;
int start() 
{    
    int a, b, c;
    scanf("%d:%d:%d", &a, &b, &c);
    int time = a * hour + b * minutes + c;
    return time;
}
int end() {   
    int a, b, c;
    scanf("%d:%d:%d", &a, &b, &c);
    int time = a * hour + b * minutes + c;
    char ch, extra_day;
    while ((ch = getchar()) != '\n' && ch != '\r') {
        if (ch == '(') {
            getchar();  
            extra_day = getchar();   
            time = time + (extra_day - '0') * day;
        }
    }
    return time;
}
void display(int time)
 {    
    int a, b, c;
    a = time / hour;
    time = time % hour;
    b = time / minutes;
    time = time % minutes;
    c = time;
    printf("%02d:%02d:%02d\n", a, b, c);
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int A,B,C,D;
        A=start();
        B=end();
        C=start();
        D=end();
        int time_all=(B-A+D-C)/2;
        display(time_all);
    }
    
}