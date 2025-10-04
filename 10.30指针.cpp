#include<stdio.h>
int main()

{
	//指针和数组
//	 int i=1;
//	 char arr0[5]="love";
//	 char *arr1[5]={"love"};
//	 for (int m=0;m<5;m++)
//	 {
//	 	printf("%d\n",m);
//	 	printf("%d\n",arr1[m]);
//	 }
//	
//	//二级指针 
//	char dinner[6]="cream";
//	char*o = dinner;//表示指向dinner数组首位上的字符的地址 
//	char**q = &o; 
//	printf("%d\n",o);
//	printf("%c\n",*o);
//	printf("%d\n",q);//存放o的地址 
//	printf("%d\n",*q);//=o
//	printf("%c\n",**q);
//	
//	//通过指针运算取数组中的值 
//	printf("%c\n",*o);
//	printf("%d\n",o);
//	o+=7;//地址加7，超过数组有定义部分，合法但是为空（不是0！是啥也没有） 
//	printf("%c\n",*o);
//	printf("%d\n",o);
//	
//	//指针运算 
//	//字符串数组遍历 
//	char dinner[6]="cream";
//	char*o = dinner;
//	for(int i=0;i<6;i++)
//	{
//		printf("%c\n",*o);
//		o++;//对char*型指针，每次+1（o是地址，而char型占1byte）
//		printf("%d\n",o);//！可以发现结束符占一位但是打印出来为空 
//	}
//	
//	//整型数组遍历 
//	int arr[5]={0};
//	int*t = arr;//定义指针t指向arr数组的第一位 
//	for(int i=0;i<5;i++)
//	{
//		(*t)=(*(t-1)+2);
//		printf("%d\n",(*t));
//		t++;//对int*型指针，每次+4（t是地址，而int型占4byte） 
//		printf("%d\n",t);
//	}
//	
//	//设置和调用指针 
//	int c = 10;
//	int*p=NULL;//p是一个空指针，该指针变量所代表的地址上的值为int型 
//	p=&c;//赋值：p需要一个地址成为它的内容，即&c 
//	printf("%d\n",p); 
//	printf("%d\n",&c); 
//	printf("%d\n",*p);//我的理解：获取p指针变量所代表的地址上的值 
//	
	//指针变量的大小 
	char*m="w";
	int a=1;
	int*p=&a;
	char*n[100]={0};/*[]优先级高于*，故n先与[]结合，即n为数组，而其中元素为指针变量，该指针变量指向char型
	所以，sizeof测的实际上是数组大小 
	若规定数组大小，则大小为1000*8（即数组总长） 
	 若不规定数组大小，则默认该数组只有一位，指针大小为8（取第一位？）Q:为啥是8？*/ 
	scanf("%[^\n]",n);
	printf("%d\n",sizeof(p));//64位系统，故指针大小为8byte 
	printf("%d\n",sizeof(m));
	printf("%d\n",sizeof(n));
	return 0;
}
