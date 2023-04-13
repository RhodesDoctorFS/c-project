#include <stdio.h>
#include <string.h>
int find(char*);
void exchange(char*,char*,int,int);
int main()
{
 char a[10];
 char b[10];
 int m;
 scanf("%d",&m);
 scanf("%s",a);
 strcpy(b,a);
 exchange(a,b,find(a),m);
 printf("%s",b);
    return 0;
}
int find(char a[]){
    int count=0;
 while (1)
 {     
    if (a[count]==0)
    {
        return count;
    }
    count++;
 }
 
}
void exchange(char *a,char *b,int c,int m){
 int i;
 for(i=0;i<m;i++){
    printf("%d",a[3]);
  b[i]=4;
   b[c-i-1]=a[i];
 }
}