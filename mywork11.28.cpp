#include<stdio.h>
#include<string.h> 
int main()
{	
	

	int s=1,f=0,d;
	//d=s*5=d+f;//我想问题是出在后面一个等号的赋值无法实现 
	//int d = 25%5.0;//浮点数不可以求余！不会自动转换变量类型！ 
	printf("%d\n\n",d);

	printf("%d\n",1-'\0');
	printf("%d\n",'1'-0);
	printf("%c\n\n",'1'-0);

	char str[10] = {"abc"};//str是一个字符串，储存在数组里。字符串会在结尾生成\0 
	char str1[] = {'a','b','c','d'};//大小为4。str1是一个数组，不是字符串，故不会生成\0 
	printf("%s\n",str);
	printf("%s\n",str1); 
	printf("%d\n",sizeof(str)/sizeof(str[0]));//这两行查看的都是数组大小，非字符串大小 
	printf("%d\n",sizeof(str1)/sizeof(str1[0]));
	printf("%d\n\n",strlen(str));
	
	int b,a=10;
	a = (3*5,a+4,13,10); //括号中的部分作为一个整体，输出一个值并赋值给a，实验看来输出的是最右边的值 
	b = 10,3*5,b+4,13;//逗号分隔表达式，故b=10和15、14、13没有关系，不是赋值运算从右到左 
	printf("%d\n",(10,2,3));
	printf("%d\n",sizeof(a));
	printf("%u\n",sizeof(a));//%u:unsigned int
	printf("%zd\n",sizeof(a));//%zd和%u一个意思，编译器版本不同 
	
	int x=1,y=1,z;
	z = x++,y++,++y;//赋值运算从右到左，故最后进行x++ 
	printf("%d %d %d",x,y,z);
	return 0;
	
}
