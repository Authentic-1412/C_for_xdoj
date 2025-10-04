#include <stdio.h>
#define LENGTH 10
int main()
{
//	const char *p1 = "hello";
//	const char str[] = "hello";
//	printf("%p\n",str);
//	printf("%p\n",p1);
//	++p1;
//	printf("%p\n",p1);
	
	int i;
	char a[LENGTH];
	//舍弃超过LENGTH长度的字符 
	while(fgets(a,LENGTH,stdin)!=NULL && a[0]!='\n') //输出完成后 输入换行符离开循环 
	{
		i=0;
		while(a[i]!='\n'&&a[i]!='\0')
		i++;
		
		if(a[i]=='\n')
		a[i]='\0';
		
		else
		while(getchar()!='\n')
		{
			continue;
			
		}
		puts(a);
		
	}
	printf("Done");
	
	
	return 0;
 } 
