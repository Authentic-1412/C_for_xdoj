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
   
    //数组
	int arr[5];
	printf("%d",arr[5]); 
   
    //实践：进制转换 实践不了一点 
	
    
	 //实践：时间加减
	 int a,w,o,p;
	 printf("请输入开始时间：\n");
	 scanf("%d:%d",&a,&w); 
	 printf("请输入结束时间：\n");
	 scanf("%d:%d",&o,&p);
	 int e=a*60+w;
	 int f=o*60+p;
	 int h=f-e;
	 printf("%d小时%d分钟\n",h/60,h%60);
	 
	 //改变b的值 
	int b=0;
    scanf("%d",&b);
    printf("%d\n",b);
    getchar();
    
    //直接在printf里运算 
    int c;
    int d;
    printf("请输入两个正数\n");
    scanf("%d %d",&c,&d);
    printf("%d+%d=%d\n",c,d,c+d);
    printf("%d\n",c+d);
    
    //数据类型与运算
	 int x;
	 scanf("%d",&x);
	 printf("%f\n",x/3.0);
    return 0;
}


