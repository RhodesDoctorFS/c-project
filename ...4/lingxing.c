# include <stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int tu[2*n-1] [2*n-1];
	for (int i = 0; i <2*n-1; i++)
	{	
		for (int a = 0; a <2*n-1 ; a++)
		{
			tu[i][a]=0;
		}	
	}
//上方为二维数组初始化------------------------
//下方为二维数组的写入------------------------
	for (int x = 0; x <= n-1; x++)
	{
		tu[x] [n-1]=x+1;
		for (int a = 1;(x+1-a)!=0; a++)
		{
			tu[x][n-1-a]=(x+1-a);
			tu[x][n-1+a]=(x+1-a);
		}		
	}
//上方为二维数组上半部分的写入-------------------------
//下方为二维数组对称处理的写入-------------------------
	for (int i = n; i <= 2*n-1; i++)
	{
		for (int a = 0; a < 2*n-1; a++)
		{
			tu[i][a]=tu[2*n-2-i][a];
		}		
	}
//上方为二维数组对称处理的写入-------------------------
//下方为二维数组的读取与写出--------------------------
	for ( int x = 0; x < 2*n-1; x++)
	{		
		int count=0;
		for (int y = 0; y < 2*n-1; y++)
		{	
			
			if (tu[x][y]==0)
			{
				printf(" ");
			}
			else
			{
				printf("%d",tu[x][y]);
				count++;
				if (count==2*tu[x][n-1]-1)
				{	
					printf("\n");
					break;
				}				
			}			
		}		
	}
/*-----------------XD调皮的分割线XD---------------------*/
	return 0;
}	