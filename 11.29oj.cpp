#include<stdio.h>

	//最大公约数 
//int gcd(int a, int b) 
//{
//	int c;
//	if (a<b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	if (a>b)
//	{
//    	while (b != 0)
//		{
//        	int r = a % b; // 计算余数
//        	a = b;         // 更新 a 为 b
//        	b = r;         // 更新 b 为余数
//    	}
//	
//    return a; // 当 b 为 0 时，a 是最大公约数
//	}
//}

int main() 
{
	//PM2.5
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6= 0;
	int i,n;
	float sum = 0;
	scanf("%d",&n);
	int arr[n]={0};
	for(i = 0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	for(i = 0;i<n;i++)
	{
		sum += arr[i];
	}
	float average = sum/n;
	printf("%.2f\n",average);
	
	for(i = 0;i<n;i++)
	{
		if ((arr[i]>=0)&&(arr[i]<=50))
		{
			c1 += 1;
		}
		else if ((arr[i]>=51)&&(arr[i]<=100))
		{
			c2 += 1;
		}
		else if ((arr[i]>=101)&&(arr[i]<=150))
		{
			c3 += 1;
		}
		else if ((arr[i]>=151)&&(arr[i]<=200))
		{
			c4 += 1;
		}
		else if ((arr[i]>=201)&&(arr[i]<=300))
		{
			c5 += 1;
		}
		else if (arr[i]>300)
		{
			c6 += 1;
		}
	}
	printf("%d %d %d %d %d %d",c1,c2,c3,c4,c5,c6);
	
	
	//最大公约数  
//    int x, y;
//    scanf("%d %d", &x, &y);
//
//    printf("%d\n", gcd(x, y));

	
	
	//完数
//	int a,b,m,n= 0;
//	scanf("%d %d",&a,&b);
//	int i = a;
//	while((i>=a)&&(i<=b))
//	{
//		n = 0;
//		for(m=1;m<i;m++)
//		{
//			
//			if(i%m==0)
//			{
//				n += m;	
//			}
//			
//		}
//		if (n==i)
//			{
//				printf("%d\n",i);
//			}
//		i++;
//	}
	
	
	//冰箱温度 
//	int h,m = 0;
//	float t,T= 0.0;
//	scanf("%d %d",&h,&m);
//	t = h+m/60.0;
//	T = 4*t*t/(t+2)-20;
//	printf("%.2f",T);

	return 0;
}
