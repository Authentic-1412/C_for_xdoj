# include <stdio.h>
# include <math.h>
# include <string.h>
int main()
{
//	//9.������������
//	int a,b;
//	scanf("%d %d",&a,&b);
//	double m,n,pi,M,N;
	//����������һ����double���� 
//	m = 7.86;
//	n = 19.3;
//	pi = 3.1415926;
//	
//	M = 4/3.0*pi*pow(a/20,3)*m;
//	N = 4/3.0*pi*pow(b/20,3)*n;
//	
//	printf("%.3f %.3f",M,N);

//	//10.�¶�ת�� 
//	float c,f,d;
//	scanf("%f",&f);
//	d = f-32;
//	c = 5/9.0*d;
//	//�����������ȡС������ 
//	printf("%.2f\n",c) ;
	
//	//11.�������� 
//	int a,b;
//	scanf("%d %d",&a,&b);
//	printf("%d\n",a+b);
//	printf("%d\n",a-b);
//	printf("%d\n",a*b);
//	printf("%d\n",a/b);

//	//15.A+B+C
//	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	printf("%d",a+b+c);


	//21.��λ���
//	int a,c,d,n=0;
//	scanf("%d",&a);
//	
//	d=a;
//	while(d!=0)
//	{
//		c = d%10;
//		d = d/10;
//		n++;	
//	}
//	
//	
//	while(n!=0)
//	{
//		n--;
//		c = a/int(pow(10,n));
//		a = a%int(pow(10,n));
//		
//		printf("%d ",c);
//	}

	
	// �ַ��������
//	char a,b,c,d,e;
//	scanf("%c|%c|%c|%c|%c",&a,&b,&c,&d,&e);
//	a = a+32;
//	b = b+32;
//	c = c+32;
//	d = d+32;
//	e = e+32;
//	printf("%c%c%c%c%c!",a,b,c,d,e);

	// ������
//	float a,b,c,V;
//	scanf("%f %f %f",&a,&b,&c);
//	V = a*b*c;
//	printf("%.3f",V); 

	//�����ж�
//	int a,b;
//	scanf("%d %d",&a,&b);
//	if(a%b == 0) 
//	{
//		printf("%s","yes");
//	}
//	else
//	{
//		printf("%d %d",a/b,a%b);
//	}
	
	// ����
//	int h,m;
//	double t,T;
//	scanf("%d %d",&h,&m);
//	t = h + m/60.0;
//	T = 4*t*t/(t+2) - 20;
//	printf("%.2lf",T);

	// ����
//	int m,n,q,r;
//	scanf("%d %d %d %d",&m,&n,&q,&r);
//	if(m/n==q && m%n==r)
//	{
//		printf("%s","yes");
//	 } 
//	else
//	{
//		printf("%d %d",m/n,m%n);
//	}

	//ƽ���� 
//	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	printf("%.2lf",(a+b+c)/3.0);
	
	//λ�����
//	int a,b,sum=0;
//	scanf("%d",&a);
//	while(a!=0){
//		b = a%10;
//		a = a/10;
//		sum = sum + b;
//	} 
//	printf("%d",sum);

	//���������
//	double a ,b,c,s,p;
//	scanf("%lf %lf %lf",&a,&b,&c);
//	p = (a+b+c)/2;
//	s =  pow(p*(p-a)*(p-b)*(p-c),0.5);
//	printf("%.2lf",s);
//	 
	 //������
//	 int n,hun,fifty,twen,ten,fif,ge;
//	 scanf("%d",&n);
//	 hun = n/100;
//	 n = n%100;
//	 fifty = n/50;
//	 n = n%50;
//	 twen = n/20;
//	 n = n%20;
//	 ten = n/10;
//	 n = n%10;
//	 fif = n/5;
//	 ge = n%5;
//	 
//	 printf("%d %d %d %d %d %d",hun,fifty,twen,ten,fif,ge);
	  
	//�򵥳���
//	int n;
//	scanf("%d",&n);
//	if(n%2==0 && n%3!=0 && n%5!=0){
//		printf("%s","Nice");
//	} 
//	else if(n%2!=0 && n%3==0 && n%5!=0)
//	{
//		printf("%s","Good");
//			
//	}
//	else if(n%2!=0 && n%3!=0 && n%5==0)
//	{
//		printf("%s","Best");
//			
//	}
//	else
//	{
//		printf("%s","Bad");
//	}

	//��ż��
//	int n;
//	scanf("%d",&n);
//	if(n%5==0 && n%7==0){
//		printf("%s","yes"); 
//	} 
//	else{
//		printf("%s","no") ;
//	
//	}

//	double a,b;
//	char c;
//	scanf("%lf%c%lf",&a,&c,&b);
//	printf("a = %.2lf b = %.2lf",a,b);

	//���⳵ 
//	int a,c;
//	double b;
//	scanf("%lf %d",&b,&a);
//	if(b<=3){
//		c=10;
//	}
//	else if(b<=10)
//	{
//		c = (b-3)*2 + 10;
//	}
//	else{
//		c = (b-10)*3+ 14 + 10;
//		
//	}
//	
//	c = c + a/5*2;
//	
//	printf("%d",c);

	//���ʼ���
//	double r,n,p;
//	scanf("%lf %lf",&r,&n);
//	p = pow(1+r,n);
//	printf("%.2lf",p);

	//�����ж�
//	char str[100];
//	
//	scanf("%s",str);
//	int len = strlen(str);
//	int i = 0,j = len-1;
//	while(i<=j &&str[i]==str[j])
//	{
//		i++;
//		j--;
//	}
//	 
//	if(i<=j){
//		printf("no\n");
//	}
//	else{
//		printf("yes\n");
//	}


	//�׳�
	int n,a = 1,i;
	scanf("%d",&n);
	for(i = n;i>0;i--){
		a = a*i;
	} 
	printf("%d",a);
	return 0;
 } 
