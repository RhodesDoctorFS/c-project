#include <stdio.h>

int main()
{
     char c;
     c=getchar();
     while (c!='?')
     {
          putchar(c);
          c=getchar();
     }
     
     while (c=getchar()!='?')
     {
          putchar(++c);
     }
     while (putchar(getchar()!='?'))
     {
     }
     return 0;
}

