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
	//��������LENGTH���ȵ��ַ� 
	while(fgets(a,LENGTH,stdin)!=NULL && a[0]!='\n') //�����ɺ� ���뻻�з��뿪ѭ�� 
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
