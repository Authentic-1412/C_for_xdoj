#include<stdio.h>
int main()
{
	int ch = 0;//getchar:��ȡ�������ַ���ASCII�룬���Ϊ���� 
	while (ch!=EOF)
	{
		int ch = getchar();
		printf("%d\n",ch);
		break;
	}
	putchar(ch);//����ַ������ַ�������ch�����ַ�����ֻȡ���ַ� 
	//getchar��putchar��ֻ�������ַ��� 
	
	//while ��ӡ���� 
	int arr3[6] = {9,8,7,6,5,4};
	int i = 9;
	while(i>=4)
	{
		printf("%d",i);
		i--;
	}
	return 0;
	 
}
