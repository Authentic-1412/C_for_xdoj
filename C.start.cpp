#include <stdio.h>
#define MAXIMUM "aba"

//char add(){
//	char z='a';
//	char m[]="abc"; 
//	return m;
//}
int main() 
{
//    printf("Hello, World!\n");
//    int m,n,t;
//    scanf("%d%d",&m,&n);
//    getchar(); 
//    printf("%d\n",m+n); 
//    printf(MAXIMUM);
//    printf("\n"); 

//	char t;
 //   t=add();
 //   printf("%s",t);
 //   printf("%d",t);
   
    //����
	int arr[5];
	printf("%d",arr[5]); 
   
    //ʵ��������ת�� ʵ������һ�� 
	
    
	 //ʵ����ʱ��Ӽ�
	 int a,w,o,p;
	 printf("�����뿪ʼʱ�䣺\n");
	 scanf("%d:%d",&a,&w); 
	 printf("���������ʱ�䣺\n");
	 scanf("%d:%d",&o,&p);
	 int e=a*60+w;
	 int f=o*60+p;
	 int h=f-e;
	 printf("%dСʱ%d����\n",h/60,h%60);
	 
	 //�ı�b��ֵ 
	int b=0;
    scanf("%d",&b);
    printf("%d\n",b);
    getchar();
    
    //ֱ����printf������ 
    int c;
    int d;
    printf("��������������\n");
    scanf("%d %d",&c,&d);
    printf("%d+%d=%d\n",c,d,c+d);
    printf("%d\n",c+d);
    
    //��������������
	 int x;
	 scanf("%d",&x);
	 printf("%f\n",x/3.0);
    return 0;
}


