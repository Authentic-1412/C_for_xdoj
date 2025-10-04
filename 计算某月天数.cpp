#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	if(-1)//if判断条件句中为常数，0为假，不执行，其余为真，执行 
	{
		printf("yes");
	 } 
	else
	{
		printf("no");
	}
	
	if(b != 2)
	{
		if(b == 1||b == 3||b == 5||b == 7||b == 8||b == 10||b == 12)
		{
			printf("31\n");
		}
		else
		{
			printf("30\n");
		}
	}
	else
	{
		if(a%100 == 0)
		{
			if(a%400 == 0)
			{
				printf("29\n");
			}
			else
			{
				printf("28\n");
			}
		}
		else
		{
			if(a%4 == 0)
			{
				printf("29\n");
			}
			else
			{
				printf("28\n");
			}
		}
	}
	return 0;
}
