#include<stdio.h>
#define SIZE 5
#define N(n) (sizeof(n)/sizeof(n[0]))//�ѷ������õļ��������С����䶨���ں���
#define WEEK 4
#define DAY 7
//Q1:�ں��ж������飿 
int main ()
{
	//ָ���ʾ����
	int array[5] = {1,2,3,4,5};
	int index = 0;
	for (index = 0;index<5;index++)
	{
		printf("%d",*(array + index));
	 } 
	getchar();
	
	//��ά����
	//��ά������ָ�� 
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
//		printf("��%d�ܵ�ƽ���¶���%.2f\n",week+1,subtot/7.0);
		
//		total = total + subtot;
	}
//	printf("����µ����¶���%d(��ţ�Ƶ����¶ȣ���������ļ���ٺ٣�)\n",total);
	getchar();
	
	int subtot1,total1 = 0;
	for(day = 0;day<DAY;day++)
	{
		subtot1 = 0;
		for(week = 0;week<WEEK;week++)
		{
			subtot1 = subtot1 + temper[week][day];
			printf("%d����ʼԪ�صĵ�ַ��%d\n",week,temper[week]);
		}
		printf("ÿ������%d��ƽ���¶���%.2f\n\n",day+1,subtot1/4.0);
		total1 += subtot1;
	}
	printf("\n����µ����¶���%d\n\n",total1); 
	getchar();
	
	/*�ܽ᣺��ά������ָ��ļ�������
	1.*��ʾǳ��������
	 ��()��ʾ�е�ַ��*()��ʾ������Ԫ�صĵ�ַ��**()��ʾ������Ԫ�ص�ֵ
	 ��()��ʾԪ�ص�ַ��*()��ʾ��Ԫ�ص�ֵ����Դ��һά�����Ƴ��ľ��乫ʽ��*(a+i) = a[i]�� 
	 
	2.&��ʾ�������
	 a��ʾ���е�ַ��&a��ʾ������ά����ĵ�ַ
	 a[i]��ʾ��i����Ԫ�صĵ�ַ��&a[i]��ʾ��i�еĵ�ַ
	 
	3.ɶ��ʾ�е�ַ��ɶ��ʾԪ�ص�ַ��
	 a+i����i�е�ַ��a��i == 0�����������  
	 a[i]����i����Ԫ�صĵ�ַ
	 
	4.�Ӽ����ı���ŵĲ㼶���磺
	 a[i]+j����Ԫ�ص�ַ 
	 *(a+i)+j����Ԫ�ص�ַ
	
	��ϸʾ�����£�
	 a;//�����������е�ַ��һ����a[0][0]�ĵ�ַ��ʾ
	 &a;//������������ĵ�ַ��һ����a[0][0]��ַ��ʾ
	 a[i];�����˵�i����ʼԪ�صĵ�ַ
	 &a[i];�����˵�i�еĵ�ַ��һ����a[i][0]�ĵ�ַ��ʾ
	 a[i]+j;//�����˵�i�е�j��Ԫ�ص�ַ,a[i]����j==0�����
	 a[i][j];//�����˵�i�е�j��Ԫ��
	 &a[i][j];//�����˵�i�е�j��Ԫ�صĵ�ַ
	 *a;//��������a��Ԫ�ص�ַҲ����a[0]����&a[0][0]
	 *(a+i);//�����˵�i����Ԫ�صĵ�ַ,*a��i=0�����
	 *(a+i)+j;//�����˵�i��j��Ԫ�صĵ�ַ
	 **a;//����a����Ԫ�ص�ֵҲ����a[0][0]
	 *(*(a+i)+j);//�����˵�i�е�j��Ԫ�� ���þ��乫ʽ��⡿
	
	5.��ά�����ڼ������Ϊ�д洢����������ʾa[i][j]�ĵ�ַ��
	  ��һ������Ϊa[N][M]�����飺
	   a + i*N + j */

	  
	
	
	
	int a = 0;
	int arr2[SIZE]={1,2,3,4}; 
	while (a<SIZE)
	{
		printf("%p\n",arr2[a]);//%p:��ӡָ�룬64λ�����������64/4=16��λ�������Ĳ��� 
		a++;
	}
	//���������鳤��һ�����Ա������飺��sizeof�ó�����
	 int arr[] = {1,2,3,4,[4]=10,6}; //��������ָ��Ԫ�س�ʼ��
//	 int n = sizeof(arr)/sizeof(arr[0]);
	 int s = N(arr);
	 for (int m=0;m<s;m++)
	 {
	 	printf("%3d%12d\n",m,arr[m]);
	 }
	 getchar ();
	
//	 printf("start\n");
//	 int arrnb[] = {1,[10]=999};//�������������鳤�ȵ��﷨�ڸñ�������Υ�� 
//	 int e = N(arrnb);
//	 for (int c=0;c<e;c++)
//	 {
//	 	printf("%3d%12d\n",c,arrnb[c]);
//	 }
//	 printf("end\n");
	 
	 
	int i;
	int empty[SIZE];//����ʼ����ֵ�������ģ� 
	printf("%3s%12s\n","i","empty[i]");
	for (i=0;i<SIZE;i++)
	{
		printf("%3d%12d\n",i,empty[i]); 
	}  
	
	getchar();
	return 0;
}
