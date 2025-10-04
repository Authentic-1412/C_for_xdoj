#include <stdio.h>
int a,b,n,m;
int x[25][25],ma[25][25];
int main()
{
   
    scanf("%d %d %d %d",&n,&m,&a,&b);
    a+=2;
	b+=2;
	n+=2;
	m+=2;
	 
    ma[a-1][b-2] = 1;
    ma[a-2][b-1] = 1;
    ma[a+1][b-2] = 1;
    ma[a+2][b-1] = 1;
    ma[a+1][b+2] = 1;
    ma[a+2][b+1] = 1;
    ma[a-1][b+2] = 1;
    ma[a-2][b+1] = 1;
    ma[a][b] = 1;
    
    
	x[0][0] = 0; 
	x[2][2] = 1;
	//这两个循环必须从1开始，否则数组越界 
	//但题目要求从(0,0)开始，所以要把题目的坐标系平移一下，体现为目标坐标的平移 
    for (int i = 2;i <= n;i++){
       for(int j = 2;j <= m;j++){
            
            if (i==2 && j==2)
                continue;
            else if (ma[i][j]==0)
                x[i][j] = x[i-1][j] + x[i][j-1];
        }
        
    }
    printf("%d\n",x[n][m]);
    printf("%d",x[1][1]);
        
return 0;    
}
