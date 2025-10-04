#include<stdio.h>
int main()
{		
	//取最大值 
	int n;
	scanf("%d",&n);
	int arr[n]={0};
	int m,m_index;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int k=0;k<n;k++)
	{
		int i=0;
		m=0;
		while (i<n)
		{
			if (m<arr[i])
			{
				m=arr[i];
				m_index=i;//1.
			}
		i++;
		}
	printf("%d\n",m);
	arr[m_index]=-1;
	/* 1.m=数组中最大的数，要销毁数组中最大的一个数，则要销毁这个数本身而非改变m的值。
	销毁这个数，则要确定这个数的位置，令该位置上的数为-1.
	确定位置两种办法，指针和数组。指针通过t找到*t，数组通过角标i找到arr[i]
	所以，要对最大数的角标进行记录
	出于在if语句中对角标记录的需要，不能使用三目运算符。三目无法记录最大数的位置 
	
	
	2.while循环做到在几个数中找最大值+定位其角标
	a.对m>arr[i]的情况不需要特殊声明，
	因为此时希望m的值不变，且i++读取数组中下一个元素，所以在while循环内写明需要变化的东西即可
	
	b.对比用for循环写，发现for中的i++是在循环中最后一步执行*/ 
	}
	
	//用for循环写 
	for (int k=0;k<n;k++)
	{
	
		m = 0;
		int i=0;
		for(i=0;i<n;i++)
		{
			if(m<arr[i])
			{
				m = arr[i];
				m_index = i;
			}
		}
		printf("%d\n",m);
		arr[m_index] = -1;
	}
	getchar();
	return 0;
}
