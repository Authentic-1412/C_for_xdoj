//����
#include <stdio.h>
//#include <stdlib.h>
int main()
{
//	//scanf��ȡ������
//	int arr2[5];
//	printf("������һ��������\n");
//	scanf("%d",&arr2[0]);
//	 for (int i=0;i<5;i++)
//	 {
//	 	arr2[i]=arr2[i-1]+1;	
//	 	printf("%d\n",arr2);
//	 }
//	 for (int i=0;i<5;i++)
//	 {
//	 	printf("%d\n",arr2[i]);/*Question1:��Ϊarr2�������ַ�� 
//	 	��ֻд��������ʱ ��ʾ��������λ���ϵ��ַ������֣��ĵ�ַ*/ 
//	 }
	 
	//scanf��ȡ����
	int arr1[5];
	printf("�������������\n"); 
	for (int i=2;i<7;i++)
	{
		scanf("%d",&arr1[i]);//���ﶨ����iָ���ǽǱ� ���Ǳ����ʼֵ�����Լ����� ����Ŀһ��Ҫ�������Сһ�� 
		printf("%d",arr1[i]);
	}
	printf("������������ǣ�\n"); 
	for (int i=2;i<7;i++)
	{
		printf("%d\n",arr1[i]);
		
	}
	printf("%d\n",arr1[1]);
	
	
	int arr[5] = {1,2,3,4,5};
    //��ӡ���� 
    //for
	for (int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	arr[4] = 6;//��ֵ 
	printf("%d\n",arr[4]);
	
	//while
	int arr3[6] = {9,8,7,6,5,4};
	int i = 1;
	while(i<=6)
	{
		printf("%d\n",arr3[i]);
		i++;
	}
	
	
	//char���� 
	char str[100] = "hill";
	char *p =NULL;//ָ���ʼ�� 
	p=str;
	printf("%x\n",p);//ʮ������ 
	printf("%p\n",p);//����ʮ������ 
	printf("%o\n",p);//�˽��� 
	printf("%d\n",p);
	
	char w[]={0};
	getchar();//��ס��һ��scanf�Ľ�����Ǽ����з� 
	scanf("%[^\n]",w);//�пո����������gets() 
	scanf("%s",w);//Ҫ������ַ�����û�пո�Ļ�����scanf %s 
	puts(str);
	printf("%s",w);
	return 0;
}

 
