#include<stdio.h>
#define SIZE 5
#define N(n) (sizeof(n)/sizeof(n[0]))//把反复调用的计算数组大小的语句定义在宏里
#define WEEK 4
#define DAY 7
//Q1:在宏中定义数组？ 
int main ()
{
	//指针表示数组
	int array[5] = {1,2,3,4,5};
	int index = 0;
	for (index = 0;index<5;index++)
	{
		printf("%d",*(array + index));
	 } 
	getchar();
	
	//二维数组
	//二维数组与指针 
	int day,week;
	int  subtot,total = 0;
	int temper[WEEK][DAY] =
	{
		{9,8,8,13,14,13,12},
		{12,11,13,10,9,8,8},
		{7,8,9,9,10,12,14},
		{13,13,12,10,11,9,8}
	};
	printf("%d\n",temper[1]);
	printf("%d\n",&temper[1]);
	printf("%d\n",*temper[1]);
	getchar();
	
	for(week = 0; week<WEEK; week++)
	{
//		subtot = 0;
		for(day = 0;day<DAY;day++)
		{
//			printf("%d\n",*(temper + (week+1)*day));
			printf("%d\n",*(*(temper + week)+day));
			printf("%d\n",*(temper + week)+day);
//			printf("%d\n\n",*(temper + week + day));
//		    printf("%d\n",temper[week][day]);
//			subtot = subtot + temper[week][day];
		}
//		printf("第%d周的平均温度是%.2f\n",week+1,subtot/7.0);
		
//		total = total + subtot;
	}
//	printf("这个月的总温度是%d(好牛逼的总温度，最有意义的计算嘿嘿！)\n",total);
	getchar();
	
	int subtot1,total1 = 0;
	for(day = 0;day<DAY;day++)
	{
		subtot1 = 0;
		for(week = 0;week<WEEK;week++)
		{
			subtot1 = subtot1 + temper[week][day];
			printf("%d行起始元素的地址是%d\n",week,temper[week]);
		}
		printf("每个星期%d的平均温度是%.2f\n\n",day+1,subtot1/4.0);
		total1 += subtot1;
	}
	printf("\n这个月的总温度是%d\n\n",total1); 
	getchar();
	
	/*总结：二维数组与指针的几个符号
	1.*表示浅化，即：
	 若()表示行地址，*()表示该行首元素的地址，**()表示该行首元素的值
	 若()表示元素地址，*()表示该元素的值【来源于一维数组推出的经典公式：*(a+i) = a[i]】 
	 
	2.&表示深化，即：
	 a表示首行地址，&a表示整个二维数组的地址
	 a[i]表示第i行首元素的地址，&a[i]表示第i行的地址
	 
	3.啥表示行地址，啥表示元素地址？
	 a+i：第i行地址（a是i == 0的特殊情况）  
	 a[i]：第i行首元素的地址
	 
	4.加减不改变符号的层级，如：
	 a[i]+j：表元素地址 
	 *(a+i)+j：表元素地址
	
	详细示例如下：
	 a;//代表数组首行地址，一般用a[0][0]的地址表示
	 &a;//代表整个数组的地址，一般用a[0][0]地址表示
	 a[i];代表了第i行起始元素的地址
	 &a[i];代表了第i行的地址，一般用a[i][0]的地址表示
	 a[i]+j;//代表了第i行第j个元素地址,a[i]就是j==0的情况
	 a[i][j];//代表了第i行第j个元素
	 &a[i][j];//代表了第i行第j个元素的地址
	 *a;//代表数组a首元素地址也就是a[0]或者&a[0][0]
	 *(a+i);//代表了第i行首元素的地址,*a是i=0的情况
	 *(a+i)+j;//代表了第i行j个元素的地址
	 **a;//代表a的首元素的值也就是a[0][0]
	 *(*(a+i)+j);//代表了第i行第j个元素 【用经典公式理解】
	
	5.二维数组在计算机中为行存储，故这样表示a[i][j]的地址：
	  对一个定义为a[N][M]的数组：
	   a + i*N + j */

	  
	
	
	
	int a = 0;
	int arr2[SIZE]={1,2,3,4}; 
	while (a<SIZE)
	{
		printf("%p\n",arr2[a]);//%p:打印指针，64位电脑则输出（64/4=16）位，不够的补零 
		a++;
	}
	//不给出数组长度一样可以遍历数组：用sizeof让程序算
	 int arr[] = {1,2,3,4,[4]=10,6}; //对数组中指定元素初始化
//	 int n = sizeof(arr)/sizeof(arr[0]);
	 int s = N(arr);
	 for (int m=0;m<s;m++)
	 {
	 	printf("%3d%12d\n",m,arr[m]);
	 }
	 getchar ();
	
//	 printf("start\n");
//	 int arrnb[] = {1,[10]=999};//不给出完整数组长度的语法在该编译器中违法 
//	 int e = N(arrnb);
//	 for (int c=0;c<e;c++)
//	 {
//	 	printf("%3d%12d\n",c,arrnb[c]);
//	 }
//	 printf("end\n");
	 
	 
	int i;
	int empty[SIZE];//不初始化，值是哪来的？ 
	printf("%3s%12s\n","i","empty[i]");
	for (i=0;i<SIZE;i++)
	{
		printf("%3d%12d\n",i,empty[i]); 
	}  
	
	getchar();
	return 0;
}
