#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a*a+b*b == c*c)
	{
		printf("%d\n",a*b);
	}
	else
	{
		printf("no\n");
	}
	return 0;
 } 
