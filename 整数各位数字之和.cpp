#include<stdio.h>
//#include<math.h>
int main()
{
	int n,sum = 0;
	scanf("%d",&n);
	while(n != 0)
	{
		sum = sum + n%10;
		n = n/10;
	}
	printf("%d",sum);
	
	//������ 
	int a,m,n,count;
	scanf("%d",&n);
	m=n;
	while(n != 0)
	{
		n = n/10;
		count++;
	}
	
	
	while(count != 0)
	{
		a = m/pow(10,count-1);//x��n�η� 
		printf("%d\n",a);
		count--;
	}
	return 0;
}
