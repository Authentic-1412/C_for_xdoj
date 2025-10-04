#include<stdio.h>
#include<math.h>
int main()
{
	//多项式之和
	int a,n,i,sum=0,sumplus=0;
	scanf("%d %d",&a,&n);
	for(i=0;i<=n;i++)
	{
		sum=0;
		for (i=0;i<n;i++)
		{
			sum += a*pow(10,i);
		}
	n--;
	sumplus += sum;
	i=0;
	}
	printf("%d",sumplus);
	 
	//完全平方数
//	int a,b,m=-1;
//	scanf("%d",&b);
//	for(a=0;a<=b;a++)
//	{
//		if(a*a==b)
//		{
//			m=a;
//			printf("%d",a);
//		}
//	} 
//	if(m==-1)printf("no");
	 
	//成绩分级
//	int m;
//	scanf("%d",&m);
//	if(m>=90) printf("A");
//	else if(m>=80&&m<=89) printf("B");
//	else if(m>=70&&m<=79) printf("C");
//	else if(m>=60&&m<=69) printf("D");
//	else printf("E");
	//字符处理
//	char c;
//	scanf("%c",&c);
//	if(c>96&&c<123)
//	{
//		c=c-32;
//	}
//	else if(c>64&&c<91)
//	{
//		c=c+32;
//	}
//	else
//	{
//		c=c;
//	}
//	printf("%c",c);
	//最大整数 
//	int i,max;
//	int arr[4] = {0};
//	for (i=0;i<4;i++)
//	{
//		scanf("%d",arr+i);
//	}
//	for(i=0;i<4;i++)
//	{
//		max=max>arr[i]?max:arr[i];
//	}
//	printf("%d",max);
	return 0;
}
