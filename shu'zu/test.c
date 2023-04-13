#include <stdio.h>

int main()
{
    const int size=3;
    int board[size] [size];
    int numberx=0;
    int numbero=0;
    int result=-1;


    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d",&board[i][j]);           
        }        
    }
    
    for ( int i = 0; i < size&&result==-1; i++)
    {
        for ( int j = 0; j < size&&result==-1; j++)
        {
            if (board[i][j]==1)
            {
                numberx++;
            }else
            {
                numbero++;
            }
            if (numbero==size)
            {
                result=0;
            }else if (numberx==size)
            {
                result=1;
            }           
        }
        for (int i = 0; i < size; i++)
        {   
            int j=0;

             if (board[i][j]==1)
            {
                numberx++;
            }else
            {
                numbero++;
            }
            j++; 
                if (numbero==size)
            {
                result=0;
            }else if (numberx==size)
            {
                result=1;
            }    
        }
        for (int i = 0; i < size; i++)
        {   
            int j=3;

             if (board[i][j]==1)
            {
                numberx++;
            }else
            {
                numbero++;
            }
            j--;          
                if (numbero==size)
            {
                result=0;
            }else if (numberx==size)
            {
                result=1;
            }    
        }
    }
 if (result==-1)
 {
    printf("无人获胜\n");
 }
 if (result==0)
 {
    printf("圆批获胜\n");
 }
 if (result==1)
 {
    printf("×批获胜\n");
 }
     return 0;
}