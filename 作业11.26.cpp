#include<stdio.h>
#define number 5

int main()
{
	//decodeing�򻯰� 
	int m=0,n;
	char ed[] = " csy";
	printf("%d\n\n",sizeof(ed)/sizeof(ed[0]));
	for (m=0;m<26;m++)
	{
		n=0;
		while(ed[n] != '\0')
		/*
		1.ִ��ѭ����ִֹ��{}��ģ������ж����ͳ�ʼ����Ҫִ�У�
		�����ڲ�ѭ��break��ִ�������ж���䣡����ԭ���ʱ��͵��ԣ� 
		2.��ȷ��ѭ��������ʱ����while����֮��for
		*/ 
		{
			n++;
			//����ʽ����д������棬�ᱻcontinue���� 
			//if(ed[n] == '\0')break;
			if(ed[n] == (' ')||ed[n] ==('\0'))continue;
			/*
			�����㡣���ȣ�����a==1��2һ������д��a==1||2��Ҫд��a==1||a==2������ 
			��Σ����������ed[n]=='\0'������������������ed[n]��ֵ������\0,���޷�����whileѭ�� 
			*/
		    ed[n] = (ed[n]+1-'a')%26+'a'; 
		}
		printf("%d %s\n",m,ed);
	 } 

	//decoding
//	int m=0,n;
//	char ed[100] = "lettc fmvxlhec hehhc pszi csy";
//	printf("%d\n\n",sizeof(ed)/sizeof(ed[0]));
//	for (m=0;m<26;m++)
//	{
//		n=0;
//		while(ed[n] != '\0')//ִ��ѭ����ִֹ��{}��ģ������ж����ͳ�ʼ����Ҫִ�У������ڲ�ѭ��break��ִ�������ж���䣡����ԭ���ʱ��͵��ԣ� 
//		{
//		    //��token�ڷ��� 
//			while(ed[n] != ' ')/*����ֻ�ܽ����һ���ո�ǰ���������Ϊû��д��==�ո�ʱ��������
//								 ��������ո��ַ�������������κ�һ��Ԫ�ض�����ͨ�����鶨λ����n++�����ո�
//								 ����֮������ʼ������Ϊ0�����⣬������ʵ��һ�仰�������ٳ�ʼ�����±�����
//								 ������\0�Ƿ����Ϊ��׼����һ��ѭ�� */
//			{
//				if (ed[n]=='\0') break; 
//				ed[n] = (ed[n]+1-'a')%26+'a';
//				n++;
//			}
//		n++;//�����ո� 
//		}
//		printf("%d %s\n",m,ed);
//	 } 
	
//	int mo[3] = {0};
//	//12.3��ҵ ʵ��ѧ�š��ɼ�¼��
//	int num;
//	int str1[number][2] = {0};
//	for (num = 0;num<number;num++)
//	{
//		scanf("%d %d",&str1[num][0],&str1[num][1]);
//	}
//	num = 1;
//	for (num = 0;num<number;num++)
//	{
//		printf("%d %d\n",str1[num][0],str1[num][1]);
//	}
//	 
//	char str[] = {"0"};//�ַ�����ʼ�� 
//	int total = 0,grade = 0,n=0;//gradeҲ���ø�����װ�� 25.1.1. 
//	float average = 0,sum = 0;
//	scanf("%d",&total);
//	for(n=0;n<total;n++)
//	{
//		scanf("%s %d",str+n,&grade);
//		sum += grade;
//	 } 
//	n = 0;
//	for(int n=0;n<total;n++)
//	{
//		printf("%s %d\n",*(str+n),grade);//��δ�ӡ��ֵһ������Ϊû�ж�֮ǰ��������д��� 
//	}
//	 average = sum/total;
//	 printf("%f\n",average);
//	 
//	
//	char array[6];
//	for (int m=0;m<6;m++)
//	{
//		scanf("%c",array+m);
//	}
//	for (int n=0;n<6;n++)
//	{
//		printf("%c",*(array+n));
//	}
//	
//	char a;
//	scanf("%c",&a);
//	printf("%c",a);
//	
//	int i,j;
//	for (i = 1;i<=9;i++)
//	{
//		for (j = 1;j<=i;j++)
//		{
//			printf("%d*%d=%d\t",i,j,i*j);//\t:�Ʊ���� 
//		}
//		printf("\n");
//	}
	
	
	
//	
//	int y,i,max = 0;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&y);
//		max = max>y?max:y;
//		printf("%d\n",max);
//	 } 
//	
//	int a,b,c = 0;
//
do{
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a)
	{
		if (a==b||b==c||a==c)
		{
			
			if(a==b&&b==c&&a==c) 
			{
				printf("�ǵȱ�������");
			}
			
			else
			{
				printf("�ǵ���������");
			}
		}
		
		else if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		{
			printf("��ֱ��������"); 
		}
		
		else
		{
			printf("����ͨ������");
		}
		
	}
	else
	{
		printf("��������"); 
	}
}while(a!=-1);
while(a==-1)
{
	break;
}
return 0;
 } 
