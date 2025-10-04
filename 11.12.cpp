#include<stdio.h>
#include<stdlib.h>
/*定义常量
 a.宏是不分变量类型的
 b.const int a = 5; 在main函数中声明*/ 
#define Notebook 15.60
#define Bread 8.00
#define Milk 26.80 
#define Discount 0.9/*定义语句后要不要加分号？(0.9;)是Discount的内容,
所以之后每次引入该变量时都会引入分号，即语句结束 */
#define MAX(a, b) ( (a) > (b) ? (a) : (b))
#define SQ(y) ((y)*(y))



//int SQ(int y)
//{
//	return ((y)*(y));  // 函数求y的平方
//}

int max(int x,int y);//函数的声明 

//int SQ(int y)
//{
//	return ((y)*(y));  // 函数求y的平方
//}

int max(int x,int y)//定义函数形参不可以(int x,y) 
{
	int z = (x) > (y) ? (x):(y);
	//int z = (x++)>(y++)?(x++):(y++);
	return z;
 } 

int main()
{
	
//	int i=1;
//	while(i<=5)
//	{ // 1, 4, 9, 16, 25
//		printf("%d^2 = %d\n", i-1, SQ(i++)); 
//		// 这里需要i-1，打印的i-1是SQ(i++)执行后的i再减1，先赋值再累加 所以SQ执行后的i较先前加1，故减去 
//	}
//	system("pause");

	
	
	int o,p,q,w;
	o = 5;
	p = 8;
	q = MAX(o++,p++);//宏 
	w = max(o++,p++);//函数 
	printf("o=%d p=%d q=%d\n",o,p,q);
	printf("o=%d p=%d w=%d\n",o,p,w);

	getchar();
	
	
	int n1,n2,n3;
	scanf ("%d %d %d",&n1,&n2,&n3);
	float sum = (n1*Notebook + n2*Bread + n3*Milk)*Discount;
	//引用宏命令时要完整打入名字 
	printf("%f",sum);
		
	
	//阶乘
	int s,t,n;
	s=1;
	t=1;
	scanf("%d",&n);
	getchar();
	do{
		s=s*t;
		t++;
	}while(t<=n);
	printf("%d",s);
	 
	//鸡兔同笼
	int x,y=0;
	while (x<=35)
	{
		y=0;//循环嵌套时子循环初始化很重要！！！ 
		while (y<=35)
		{
			if ((x+y==35) && (2*x+4*y==94))
				printf("鸡有%d只，兔有%d只",x,y);
				y++;
		}
		x++;
	 } 
	
	//解二元一次方程  屁啊 这哪是二元一次方程啊 这是找数列共同项啊 
	for (int i=1;i<=100000;i++)
	{
		if ((i%3==2)&&(i%5==3)&&(i%7==2))//&&表且 
			printf("%d\n",i);	
	}
	getchar();
	return 0;
}
