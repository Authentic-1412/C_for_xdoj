#include<stdio.h>
int max(int a,int b);/*自定义函数的声明：
1.int a和int b并不是定义变量，是说这个函数有两个整型的参数 
2.最外面的int表示该函数输出为整型 */
int main()

{
	int a,b;
	scanf("%d %d",&a,&b);
	int c=max(a,b);
	printf("%d\n",c);
	printf("%d %d %d %d",a+b,a-b,a*b,a/b);
	
//	//三目运算符
//	int num = 4;
//    int result = (num > 5)? num : -num;
//    printf("Result: %d\n", result);
//    
//	int a,b,m;
//	scanf("%d %d",&a,&b);
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//	m=(a>b)?a:b;//布尔判断条件？T返回值：F返回值 () //()不是必须的，仅表示运算优先级 
//	printf("%d\n",m);
//	printf((a+b>6)?"yes\n":"no\n");
	return 0; 
	
} 
int max(int x,int y)
{
	int z;
	if (x>y)z=x;//if函数中()是必须的！ 
	else z=y;
	return z;
	
}


