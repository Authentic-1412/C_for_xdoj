#include<stdio.h>
#include<stdlib.h>
/*���峣��
 a.���ǲ��ֱ������͵�
 b.const int a = 5; ��main����������*/ 
#define Notebook 15.60
#define Bread 8.00
#define Milk 26.80 
#define Discount 0.9/*��������Ҫ��Ҫ�ӷֺţ�(0.9;)��Discount������,
����֮��ÿ������ñ���ʱ��������ֺţ��������� */
#define MAX(a, b) ( (a) > (b) ? (a) : (b))
#define SQ(y) ((y)*(y))



//int SQ(int y)
//{
//	return ((y)*(y));  // ������y��ƽ��
//}

int max(int x,int y);//���������� 

//int SQ(int y)
//{
//	return ((y)*(y));  // ������y��ƽ��
//}

int max(int x,int y)//���庯���ββ�����(int x,y) 
{
	int z = (x) > (y) ? (x):(y);
	//int z = (x++)>(y++)?(x++):(y++);
	return z;
 } 

int main()
{
	
//	int i=1;
//	while(i<=5)
//	{ // 1, 4, 9, 16, 25
//		printf("%d^2 = %d\n", i-1, SQ(i++)); 
//		// ������Ҫi-1����ӡ��i-1��SQ(i++)ִ�к��i�ټ�1���ȸ�ֵ���ۼ� ����SQִ�к��i����ǰ��1���ʼ�ȥ 
//	}
//	system("pause");

	
	
	int o,p,q,w;
	o = 5;
	p = 8;
	q = MAX(o++,p++);//�� 
	w = max(o++,p++);//���� 
	printf("o=%d p=%d q=%d\n",o,p,q);
	printf("o=%d p=%d w=%d\n",o,p,w);

	getchar();
	
	
	int n1,n2,n3;
	scanf ("%d %d %d",&n1,&n2,&n3);
	float sum = (n1*Notebook + n2*Bread + n3*Milk)*Discount;
	//���ú�����ʱҪ������������ 
	printf("%f",sum);
		
	
	//�׳�
	int s,t,n;
	s=1;
	t=1;
	scanf("%d",&n);
	getchar();
	do{
		s=s*t;
		t++;
	}while(t<=n);
	printf("%d",s);
	 
	//����ͬ��
	int x,y=0;
	while (x<=35)
	{
		y=0;//ѭ��Ƕ��ʱ��ѭ����ʼ������Ҫ������ 
		while (y<=35)
		{
			if ((x+y==35) && (2*x+4*y==94))
				printf("����%dֻ������%dֻ",x,y);
				y++;
		}
		x++;
	 } 
	
	//���Ԫһ�η���  ƨ�� �����Ƕ�Ԫһ�η��̰� ���������й�ͬ� 
	for (int i=1;i<=100000;i++)
	{
		if ((i%3==2)&&(i%5==3)&&(i%7==2))//&&���� 
			printf("%d\n",i);	
	}
	getchar();
	return 0;
}
