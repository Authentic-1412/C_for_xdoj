#include<stdio.h>
#include<string.h> 
int main()
{	
	

	int s=1,f=0,d;
	//d=s*5=d+f;//���������ǳ��ں���һ���Ⱥŵĸ�ֵ�޷�ʵ�� 
	//int d = 25%5.0;//���������������࣡�����Զ�ת���������ͣ� 
	printf("%d\n\n",d);

	printf("%d\n",1-'\0');
	printf("%d\n",'1'-0);
	printf("%c\n\n",'1'-0);

	char str[10] = {"abc"};//str��һ���ַ�����������������ַ������ڽ�β����\0 
	char str1[] = {'a','b','c','d'};//��СΪ4��str1��һ�����飬�����ַ������ʲ�������\0 
	printf("%s\n",str);
	printf("%s\n",str1); 
	printf("%d\n",sizeof(str)/sizeof(str[0]));//�����в鿴�Ķ��������С�����ַ�����С 
	printf("%d\n",sizeof(str1)/sizeof(str1[0]));
	printf("%d\n\n",strlen(str));
	
	int b,a=10;
	a = (3*5,a+4,13,10); //�����еĲ�����Ϊһ�����壬���һ��ֵ����ֵ��a��ʵ�鿴������������ұߵ�ֵ 
	b = 10,3*5,b+4,13;//���ŷָ����ʽ����b=10��15��14��13û�й�ϵ�����Ǹ�ֵ������ҵ��� 
	printf("%d\n",(10,2,3));
	printf("%d\n",sizeof(a));
	printf("%u\n",sizeof(a));//%u:unsigned int
	printf("%zd\n",sizeof(a));//%zd��%uһ����˼���������汾��ͬ 
	
	int x=1,y=1,z;
	z = x++,y++,++y;//��ֵ������ҵ��󣬹�������x++ 
	printf("%d %d %d",x,y,z);
	return 0;
	
}
