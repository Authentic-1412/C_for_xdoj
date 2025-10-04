//数组
#include <stdio.h>
//#include <stdlib.h>
int main()
{
//	//scanf读取升级版
//	int arr2[5];
//	printf("请输入一个整数：\n");
//	scanf("%d",&arr2[0]);
//	 for (int i=0;i<5;i++)
//	 {
//	 	arr2[i]=arr2[i-1]+1;	
//	 	printf("%d\n",arr2);
//	 }
//	 for (int i=0;i<5;i++)
//	 {
//	 	printf("%d\n",arr2[i]);/*Question1:改为arr2则输出地址？ 
//	 	当只写数组名称时 表示该数组首位（上的字符或数字）的地址*/ 
//	 }
	 
	//scanf读取数组
	int arr1[5];
	printf("输入五个整数：\n"); 
	for (int i=2;i<7;i++)
	{
		scanf("%d",&arr1[i]);//这里定义了i指的是角标 即角标的起始值可以自己定义 但数目一定要与数组大小一致 
		printf("%d",arr1[i]);
	}
	printf("你输入的数组是：\n"); 
	for (int i=2;i<7;i++)
	{
		printf("%d\n",arr1[i]);
		
	}
	printf("%d\n",arr1[1]);
	
	
	int arr[5] = {1,2,3,4,5};
    //打印数组 
    //for
	for (int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	arr[4] = 6;//赋值 
	printf("%d\n",arr[4]);
	
	//while
	int arr3[6] = {9,8,7,6,5,4};
	int i = 1;
	while(i<=6)
	{
		printf("%d\n",arr3[i]);
		i++;
	}
	
	
	//char数组 
	char str[100] = "hill";
	char *p =NULL;//指针初始化 
	p=str;
	printf("%x\n",p);//十六进制 
	printf("%p\n",p);//完整十六进制 
	printf("%o\n",p);//八进制 
	printf("%d\n",p);
	
	char w[]={0};
	getchar();//接住上一个scanf的结束标记即换行符 
	scanf("%[^\n]",w);//有空格用这个或者gets() 
	scanf("%s",w);//要输入的字符串中没有空格的话就用scanf %s 
	puts(str);
	printf("%s",w);
	return 0;
}

 
