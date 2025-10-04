#include<stdio.h>
#include<math.h>
int main()
{
	//矩阵
	int m,sum=0,i,j,k=0,n,t;
	scanf("%d",&m);
	int matrix[m][m]={0};
	int sumarr[2*m+2]={0};
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	 } 
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<m;j++)
		{
			sum+=matrix[i][j];
		}
		sumarr[k]=sum;
		k++;

	}
	for(j=0;j<m;j++)
	{
		sum=0;
		for(i=0;i<m;i++)
		{
			sum+=matrix[i][j];
		}
		sumarr[k]=sum;
		k++;
	}
	sum=0;
	for(i=0;i<m;i++)
	{
		
		for(j=0;j<m;j++)
		{
			if(i==j)
			{
				sum+=matrix[i][j];
			}
			if(j==4)break;
			
		}
		
	}
	sumarr[k]=sum;
	sum=0;
	for(i=0;i<m;i++)
	{
		
		for(j=0;j<m;j++)
		{
			if(i+j==(m-1))
			{
				sum+=matrix[i][j];
			}
			if(j==4)break;
		}
		
	}
	sumarr[k]=sum;
	
	
	for(n=0;n<k;n++)
	{
		for(i=0;i<k-1;i++)
		{
			if(sumarr[i]>sumarr[i+1])
			{
				t=sumarr[i];
				sumarr[i]=sumarr[i+1];
				sumarr[i+1]=t;
				
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d ",sumarr[i]);
	}
	
	
	//root
//	long N;
//	int x,y,k,sum=0,a;
//	scanf("%d %d %d",&x,&y,&k);
//	N=pow(x,y);
//	if(N<k)
//	printf("%ld",N);
//	else
//	{
//
//		while(N!=0)
//		{
//			a=N%k;
//			sum+=a;
//			N/=k;
//		}
//		printf("%d",sum);
//		
//	}
	
	
	//排序
	
//	int arr[4]={0};
//	int i,k,t;
//	for(i=0;i<4;i++)
//	{
//		scanf("%d",arr+i);
//	 } 
//	 
//	for(k=0;k<4;k++)
//	{
//		for(i=0;i<3;i++)
//		{
//			if(arr[i]>arr[i+1])
//			{
//				t=arr[i];
//				arr[i]=arr[i+1];
//				arr[i+1]=t;
//				
//			}
//		}
//	}
//	for(i=0;i<4;i++)
//	{
//		printf("%d ",arr[i]);
//	}
	
	//电费
//	float fee;
//	scanf("%f",&fee);
//	if(fee>=0&&fee<=110) 
//	{
//		printf("%.2f",fee*0.5);
//	}
//	if(fee>110&&fee<=210)
//	{
//		printf("%.2f",55.0+(fee-110)*0.55);
//	}
//	if(fee>210)
//	{
//		printf("%.2f",55.0+(210-110)*0.55+(fee-210)*0.7);
//	}
//	//累加和校验 位运算符 周二课上学 
//	char str1[] = "hello";//字符串的两种定义方式 
//	char str[] = {"0"};//双引号字符串；单引号字符 
//	scanf("%s",str);//是的，字符串名也是指针 
//	printf("%s",str);
//	printf("%s",str1);
//	//角谷定理
//	 int n;
//	 int sum = 0;
//	 scanf("%d",&n);
//	 while(n!=1)
//	{
//	 if (n%2==0)
//	 {
//	 	n/=2;
//	 	sum+=1;
//	  } 
//	  else
//	  {
//	  	n = 3*n+1;
//	  	sum+=1;
//	  }
//	}
//	  printf("%d",sum);
	
	//车牌限行 
//	int a,b,c,d;//初始化不能a,b,c,d = 0!!!! 
//	scanf("%d %d %d",&a,&b,&c);
//	d = c%10;
//	if (a==6||a==7||b<200)
//	{
//		printf("%d no",d);
//	}
//	else if(b>=200&&b<400)
//	{
//		if(a==1)
//		{
//			if(d==1||d==6)
//			{
//				printf("%d yes",d); 
//			}
//			else
//			{
//				printf("%d no",d);
//			}
//		}
//		if(a==2)
//		{
//			if(d==2||d==7)
//			{
//				printf("%d yes",d); 
//			}
//			else
//			{
//				printf("%d no",d);
//			}
//		 } 
//		if(a==3)
//		{
//			if(d==3||d==8)
//			{
//				printf("%d yes",d); 
//			}
//			else
//			{
//				printf("%d no",d);
//			}
//		
//		}
//		if(a==4)
//		{
//			if(d==4||d==9)
//			{
//				printf("%d yes",d); 
//			}
//			else
//			{
//				printf("%d no",d);
//			}
//		}
//		if(a==5)
//		{
//			if(d==5||d==0)
//			{
//				printf("%d yes",d); 
//			}
//			else
//			{
//				printf("%d no",d);
//			}
//		}
//		
//	}
//	else if(b>=400)
//	{
//		if(a==1||a==3||a==5)
//		{
//			if(d==1||d==3||d==5||d==7||d==9)
//			{
//				printf("%d yes",d); 
//			}
//			else
//			{
//				printf("%d no",d);
//			}
//		}
//		if(a==2||a==4)
//		{
//			if(d==0||d==2||d==4||d==6||d==8)
//			{
//				printf("%d yes",d); 
//			}
//			else
//			{
//				printf("%d no",d);
//			}
//		 } 
//	}
	return 0;
}
