#include<stdio.h>
int main()

{
	//ָ�������
//	 int i=1;
//	 char arr0[5]="love";
//	 char *arr1[5]={"love"};
//	 for (int m=0;m<5;m++)
//	 {
//	 	printf("%d\n",m);
//	 	printf("%d\n",arr1[m]);
//	 }
//	
//	//����ָ�� 
//	char dinner[6]="cream";
//	char*o = dinner;//��ʾָ��dinner������λ�ϵ��ַ��ĵ�ַ 
//	char**q = &o; 
//	printf("%d\n",o);
//	printf("%c\n",*o);
//	printf("%d\n",q);//���o�ĵ�ַ 
//	printf("%d\n",*q);//=o
//	printf("%c\n",**q);
//	
//	//ͨ��ָ������ȡ�����е�ֵ 
//	printf("%c\n",*o);
//	printf("%d\n",o);
//	o+=7;//��ַ��7�����������ж��岿�֣��Ϸ�����Ϊ�գ�����0����ɶҲû�У� 
//	printf("%c\n",*o);
//	printf("%d\n",o);
//	
//	//ָ������ 
//	//�ַ���������� 
//	char dinner[6]="cream";
//	char*o = dinner;
//	for(int i=0;i<6;i++)
//	{
//		printf("%c\n",*o);
//		o++;//��char*��ָ�룬ÿ��+1��o�ǵ�ַ����char��ռ1byte��
//		printf("%d\n",o);//�����Է��ֽ�����ռһλ���Ǵ�ӡ����Ϊ�� 
//	}
//	
//	//����������� 
//	int arr[5]={0};
//	int*t = arr;//����ָ��tָ��arr����ĵ�һλ 
//	for(int i=0;i<5;i++)
//	{
//		(*t)=(*(t-1)+2);
//		printf("%d\n",(*t));
//		t++;//��int*��ָ�룬ÿ��+4��t�ǵ�ַ����int��ռ4byte�� 
//		printf("%d\n",t);
//	}
//	
//	//���ú͵���ָ�� 
//	int c = 10;
//	int*p=NULL;//p��һ����ָ�룬��ָ�����������ĵ�ַ�ϵ�ֵΪint�� 
//	p=&c;//��ֵ��p��Ҫһ����ַ��Ϊ�������ݣ���&c 
//	printf("%d\n",p); 
//	printf("%d\n",&c); 
//	printf("%d\n",*p);//�ҵ���⣺��ȡpָ�����������ĵ�ַ�ϵ�ֵ 
//	
	//ָ������Ĵ�С 
	char*m="w";
	int a=1;
	int*p=&a;
	char*n[100]={0};/*[]���ȼ�����*����n����[]��ϣ���nΪ���飬������Ԫ��Ϊָ���������ָ�����ָ��char��
	���ԣ�sizeof���ʵ�����������С 
	���涨�����С�����СΪ1000*8���������ܳ��� 
	 �����涨�����С����Ĭ�ϸ�����ֻ��һλ��ָ���СΪ8��ȡ��һλ����Q:Ϊɶ��8��*/ 
	scanf("%[^\n]",n);
	printf("%d\n",sizeof(p));//64λϵͳ����ָ���СΪ8byte 
	printf("%d\n",sizeof(m));
	printf("%d\n",sizeof(n));
	return 0;
}
