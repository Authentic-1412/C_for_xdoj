#include<stdio.h>
int max(int a,int b);/*�Զ��庯����������
1.int a��int b�����Ƕ����������˵����������������͵Ĳ��� 
2.�������int��ʾ�ú������Ϊ���� */
int main()

{
	int a,b;
	scanf("%d %d",&a,&b);
	int c=max(a,b);
	printf("%d\n",c);
	printf("%d %d %d %d",a+b,a-b,a*b,a/b);
	
//	//��Ŀ�����
//	int num = 4;
//    int result = (num > 5)? num : -num;
//    printf("Result: %d\n", result);
//    
//	int a,b,m;
//	scanf("%d %d",&a,&b);
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//	m=(a>b)?a:b;//�����ж�������T����ֵ��F����ֵ () //()���Ǳ���ģ�����ʾ�������ȼ� 
//	printf("%d\n",m);
//	printf((a+b>6)?"yes\n":"no\n");
	return 0; 
	
} 
int max(int x,int y)
{
	int z;
	if (x>y)z=x;//if������()�Ǳ���ģ� 
	else z=y;
	return z;
	
}


