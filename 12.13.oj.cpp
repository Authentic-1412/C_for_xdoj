#include<stdio.h>
#include<math.h>
//int max(int a,int b)
//{
//	max=a>b?a:b;
//	return max;
//}

int main()
{
	//������ 
//	int n,sum=0,a,cont=0,ni=0,m;
//	scanf("%d",&n);
//	m=n;
//	if(n!=0)
//	{
//	
//		while(n!=0)
//		{
//			a=n%10;
//			ni=ni*10+a;
//			sum+=a;
//			n/=10;
//		}
//		if(ni==m)
//		{
//			printf("%d",sum);
//		}
//		else printf("no");
//	}
//	else printf("%d",0);
	
	
	int n,cont=0,a,max=-1,min=10;
	scanf("%d",&n);
	if(n!=0)
	{
		while(n!=0)
		{
			a=n%10;
			max=max>a?max:a;
			min=min<a?min:a;
			cont++;
			n/=10;	
		}
			
		
		printf("%d %d %d",cont,max,min);
	}
	else printf("%d %d %d",1,0,0);
		
	
	
	//��°ͺղ���
//	int n,i,j,flag,cot=0;
//	scanf("%d",&n);
//	int su[1000]={0};
//	for(i=2;i<1000;i++)
//	//��һ��ѭ����i��ֵ���䣬flag����ǩɸѡi�ǲ������� 
//	{
//		flag = 0;
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				flag=1;
//				break;
//				//����������if��forѭ����ִ���������� 
//			}
//		}
//		if(flag==0)
//		{
//			su[cot++]=i;
//		}
//	}
//	int b=0,p,vmin=0,index;
//	int min[100]={0};
//	int max[100]={0};
//	for(i=0;i<cot;i++)
//	{
//		for(j=0;j<cot;j++)
//		{
//			if(su[i]+su[j]==n)
//			{
//				if(su[i]>su[j])
//				{
//					p=su[i];
//					su[j]=p;
//					su[i]=su[j];
//				}
//				if(su[i]<su[j])
//				{
//					min[b]=su[i];
//					max[b]=su[j];
//					b++;
//				}
//				
//			}
//		}
//	}
//	for(i=0;i<b;i++)
//	{
//		if(vmin>min[i])
//		{
//			vmin=min[i];
//			index=i;
//		}
//	}
//	printf("%d %d",min[index],max[index]);
	
	//�׳� 
//	int n,t,a=1,m,sum=0;
//	scanf("%d",&n);
//	for(t=1;t<=n;t++)
//	{
//		a*=t;
//	}
//	printf("%d ",n);
//	printf("%d ",a);
//	for(m=n;m>0;m--)
//	{
//		a=1;
//		for(t=1;t<=m;t++)
//		{
//			a*=t;
//		}
//		sum+=a;
//	}
//	printf("%d",sum);
	
	
	//��Ȼ���ֽ�
//	int n,m,i,j,sum=0;
//	int odd[100000]={0};
//	scanf("%d",&n);
//	m=pow(n,3);
//	for(i=0;i<100000;i++)
//	{
//		odd[i]=2*(i+1)-1;
//	 } 
//	int*p=odd;
//	for(i=0;i<100000;i++)
//	{
//		p+=i;
//		sum=0;
//		for(j=0;j<n;j++)
//		{
//			sum+=*(p+j);
//		}
//		if(sum==m)
//		{
//			for(j=0;j<n;j++)
//			{
//				printf("%d ",*(p+j));
//			}
//			
//		printf("\n");
//		break;//��ֹ���һ��i++��ָ��ָ������֮��Ŀյ�ַ	
//		}
//	}
	
	//ѡ�� 
	//һ�������ܶ������ 
//	int n,i,m,p,sum=0,max=0,j=0,pre_max,dex;
//	scanf("%d",&n);
//	int pre[n]={0};
//	int add[100]={0}; 
//	int index[100]={0};
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",pre+i);
//	}
//	for(i=0;i<n;i++)
//	{
//		m=pre[i];
//		sum=0;
//		while(m!=0)
//		{
//			p=m%10;
//			sum+=p;
//			m=m/10;
//		}
//		add[i]=sum;
//	}
//	for(i=0;i<n;i++)
//	{
//		if(max<add[i])
//		{
//			max=add[i];
//			dex=i;
//		}
//		else if(max==add[i])
//		{
//			if(pre[i]>pre[dex])
//			{
//				dex=i;
//			}
//		}
//	}
//	printf("%d",pre[dex]);
//	for(i=0;i<n;i++)
//	{
//		if (add[i]==add[dex])
//		{
//			index[j]=i;
//			j++;
//		}
//	}
//	for(i=0;i<j-1;i++)
//	{
//		pre_max=pre[index[i]]>pre[index[i+1]]?pre[index[i]]:pre[index[i+1]];//���indexֻ��һ��ֵ���ᵼ����������������ֵ�Ƚ� 
//	}
//	printf("%d",pre_max);

	//���� 
//	int n,i,max=0;
//	scanf("%d",&n);
//	int temp[n]={0};
//	int dis[100]={0};
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",temp+i);
//	}
//	for(i=0;i<n;i++)
//	{
//		dis[i]=abs(temp[i]-temp[i+1]);
//	} 
//	for(i=0;i<n-1;i++)//i<n-1��n-1����Ҫ�����������Խ������ֵ�� 
//	{
//		max=max>dis[i]?max:dis[i];
//	}
//	printf("%d",max);
	return 0;
}
