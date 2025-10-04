#include<stdio.h>
int main()
{
//	int m,i,j,t;
//	scanf("%d",&m);
//	int arr[m]={0};
//	
//	for(i=0;i<m;i++)
//	{
//		scanf("%d",arr+i);
//	}
//	for(j=0;j<m;j++)
//	{
//		for(i=0;i<m-1;i++)
//		{
//			if(arr[i]<arr[i+1])
//			{
//				t=arr[i];
//				arr[i]=arr[i+1];
//				arr[i+1]=t;
//			}
//		}
//	}
//	for(i=0;i<m;i++)
//	{
//		printf("%d",arr[i]);
//	}
	
	
//	int i;
//   for (i=0;i<100000;i++)
//   {
//		if (i%3 == 2&&i%5 == 3&&i%7 == 2)//优先级 
//   		printf("%d\n",i);
//
//   
//   }
	
	//时间计算
//	long long sec;
//	int m,s1,h,m1,d,h1;
//	scanf("%lld",&sec);
//	m=sec/60;
//	s1=sec%60;
//	h=m/60;
//	m1=m%60;
//	d=h/24;
//	h1=h%24;
//	printf("%d天%d时%d分%d秒",d,h1,m1,s1);
//	 
//	
	//阶乘
//	int t,num=1,n;
//	scanf("%d",&n);
//	for(t=1;t<=n;t++) 
//	{
//		num*=t;
//	}
//	printf("%d",num);
//	getchar();
//	
//	//三角形
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		
		if(a==b||b==c||a==c)
		{
			if(a==b&&b==c&&a==c)
			{
				printf("等边");
			 
			}
			else printf("等腰"); 
			
		}
		else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
		printf("直角");
			
		else printf("yes");
		
		
	 } 
	else
	printf("no");
	
	
//	
//	int i;
//	int arr[5];
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=4;i>=0;i--)
//	{
//		printf("%d",arr[i]);	
//	}
	
////	char result = (37 > 38) ? 't':'m' ;
//	char result = (37 > 38) ? t:m ;
//	putchar(result);
//	printf("%c",result);
//	
//	if(1>2)
//	printf("1");
////	printf("2");
////	printf("3");
	return 0;
}
