#include<stdio.h>
int main()
{
	int ch = 0;//getchar:获取输入首字符的ASCII码，输出为整型 
	while (ch!=EOF)
	{
		int ch = getchar();
		printf("%d\n",ch);
		break;
	}
	putchar(ch);//输出字符而非字符串，若ch被赋字符串，只取首字符 
	//getchar和putchar都只能用于字符！ 
	
	//while 打印数组 
	int arr3[6] = {9,8,7,6,5,4};
	int i = 9;
	while(i>=4)
	{
		printf("%d",i);
		i--;
	}
	return 0;
	 
}
