#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<float.h>
#include<math.h>
#define A +1

int main()
{
	printf("%d\n",sizeof(float));//4
	printf("%d\n",sizeof(double));//8
	int o=pow(2,32);
	printf("%d\n",o);
	printf("%d\n",INT_MAX);
	printf("%d\n",CHAR_BIT);
	printf("%d\n",SCHAR_MAX);
	printf("%d\n",UCHAR_MAX);
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%ld\n",LONG_MAX);
	printf("%ld\n",LLONG_MAX);
	printf("%ld\n",LLONG_MIN);
//	int a=2 A;
//	printf("%d",a);
//	int b=a+A;
//	printf("%d",b);
//	char arr[1000]={"1234"};
//	printf("%d\n",strlen(arr));
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(int));
	
	//��ά���������ֵ����λ 
//	int a[3][6];
//	int i=0,j=0,max=0,row,column;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<6;j++)
//		{
//			scanf("%d",a[i]+j);
//		}
//	}
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<6;j++)
//		{
//			if(max<a[i][j])
//			{
//				max=a[i][j];
//				row=i+1;
//				column=j+1;
//			}
//		}
//	}
//	printf("%d %d %d",max,row,column);
//	
//	char arr[5]={"1234"};

	/*�ַ�����ʼ��������{"0"}{'0'}{0}
	�ַ�������ʼ����Ĭ��ȫ�գ�printf����ӡ��(\0)*/ 
//	scanf("%s",arr);
	/*�Կո���Ϊ��ȡ������־�������ٶ�ȡ�����ֵ��������ȡֻ����ѭ��*/ 
//	gets(arr);
	/*gets()�����ַ������ո���Ϊ�ַ����룬ֻ�ϻس���Ϊ������־�� 
	�� scanf("%[^\n]",arr);�ǵ�Ч�� */
//	for (i=4;i>=0;i--)
//	{
//		printf("%c",arr[i]);
//	}
	return 0;
}
