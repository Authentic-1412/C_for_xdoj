# include <stdio.h>
int main()
{
	//ÊýÁÐ·Ö¶Î
	int n,count = 1,i;
	
	scanf("%d",&n);
	int a[n] = {0};
	for (i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if (a[i]!=a[i+1])
		{
			count++;
		}
	}
	printf("%d\n",count);
	
 
	
//	int date ,mai,car,a;
//	scanf("%d %d %d",&date,&mai,&car);
//	a = car%10;
//	if(date==6 || date==7 || mai<200)
//	{
//		printf("%d ",a);
//		printf("%s","no"); 
//	}
//	
//	if (mai>=200 && mai<400)
//	{
//		if(date == 1)
//		{
//			printf("%d ",a);
//			if(a == 1 || a == 6)
//			{
//				printf("%s","yes");
//			}
//			else{
//				printf("%s","no");
//			}
//			
//		}
//		
//		if(date == 2)
//		{
//			printf("%d ",a);
//			if(a == 2 || a == 7)
//			{
//				printf("%s","yes");
//			}
//			else{
//				printf("%s","no");
//			}
//			
//		}
//		
//		if(date == 3)
//		{
//			printf("%d ",a);
//			if(a == 3 || a == 8)
//			{
//				printf("%s","yes");
//			}
//			else{
//				printf("%s","no");
//			}
//			
//		}
//		
//		if(date == 4)
//		{
//			printf("%d ",a);
//			if(a == 4 || a == 9)
//			{
//				printf("%s","yes");
//			}
//			else{
//				printf("%s","no");
//			}
//			
//		}
//		
//		if(date == 5)
//		{
//			printf("%d ",a);
//			if(a == 5 || a == 0)
//			{
//				printf("%s","yes");
//			}
//			else{
//				printf("%s","no");
//			}
//			
//		}
//	}
//	
//	if (mai>=400)
//	{
//		if(date == 1 || date == 3 || date == 5)
//		{
//			printf("%d ",a);
//			if(a == 1 || a == 3 || a == 5 || a == 7|| a == 9)
//			{
//				printf("%s","yes");
//			}
//			else{
//				printf("%s","no");
//			}
//			
//		}
//		
//		if(date == 2 || date == 4)
//		{
//			printf("%d ",a);
//			if(a == 0 || a == 2 || a == 4 || a == 6|| a == 8)
//			{
//				printf("%s","yes");
//			}
//			else{
//				printf("%s","no");
//			}
//			
//		}
//	}
	return 0;
 } 
