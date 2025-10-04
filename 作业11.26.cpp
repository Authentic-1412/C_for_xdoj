#include<stdio.h>
#define number 5

int main()
{
	//decodeing简化版 
	int m=0,n;
	char ed[] = " csy";
	printf("%d\n\n",sizeof(ed)/sizeof(ed[0]));
	for (m=0;m<26;m++)
	{
		n=0;
		while(ed[n] != '\0')
		/*
		1.执行循环不止执行{}里的，连着判断语句和初始化都要执行，
		所以内层循环break后执行外层的判断语句！不懂原理的时候就调试！ 
		2.不确定循环次数的时候用while，反之用for
		*/ 
		{
			n++;
			//迭代式不能写在最后面，会被continue跳过 
			//if(ed[n] == '\0')break;
			if(ed[n] == (' ')||ed[n] ==('\0'))continue;
			/*
			两个点。首先，想表达a==1或2一定不能写作a==1||2；要写成a==1||a==2！！！ 
			其次，如果不加上ed[n]=='\0'的情况，下面的语句会让ed[n]的值不再是\0,故无法跳出while循环 
			*/
		    ed[n] = (ed[n]+1-'a')%26+'a'; 
		}
		printf("%d %s\n",m,ed);
	 } 

	//decoding
//	int m=0,n;
//	char ed[100] = "lettc fmvxlhec hehhc pszi csy";
//	printf("%d\n\n",sizeof(ed)/sizeof(ed[0]));
//	for (m=0;m<26;m++)
//	{
//		n=0;
//		while(ed[n] != '\0')//执行循环不止执行{}里的，连着判断语句和初始化都要执行，所以内层循环break后执行外层的判断语句！不懂原理的时候就调试！ 
//		{
//		    //在token内翻译 
//			while(ed[n] != ' ')/*这样只能解决第一个空格前的情况，因为没有写明==空格时该怎样。
//								 如何跳过空格？字符串存在数组里，任何一个元素都可以通过数组定位，故n++跳过空格；
//								 但随之产生初始化后又为0的问题，我们想实现一句话翻译完再初始化重新遍历，
//								 所以以\0是否出现为标准外套一个循环 */
//			{
//				if (ed[n]=='\0') break; 
//				ed[n] = (ed[n]+1-'a')%26+'a';
//				n++;
//			}
//		n++;//跳过空格 
//		}
//		printf("%d %s\n",m,ed);
//	 } 
	
//	int mo[3] = {0};
//	//12.3作业 实现学号、成绩录入
//	int num;
//	int str1[number][2] = {0};
//	for (num = 0;num<number;num++)
//	{
//		scanf("%d %d",&str1[num][0],&str1[num][1]);
//	}
//	num = 1;
//	for (num = 0;num<number;num++)
//	{
//		printf("%d %d\n",str1[num][0],str1[num][1]);
//	}
//	 
//	char str[] = {"0"};//字符串初始化 
//	int total = 0,grade = 0,n=0;//grade也得用个数组装吧 25.1.1. 
//	float average = 0,sum = 0;
//	scanf("%d",&total);
//	for(n=0;n<total;n++)
//	{
//		scanf("%s %d",str+n,&grade);
//		sum += grade;
//	 } 
//	n = 0;
//	for(int n=0;n<total;n++)
//	{
//		printf("%s %d\n",*(str+n),grade);//五次打印的值一样，因为没有对之前的输入进行储存 
//	}
//	 average = sum/total;
//	 printf("%f\n",average);
//	 
//	
//	char array[6];
//	for (int m=0;m<6;m++)
//	{
//		scanf("%c",array+m);
//	}
//	for (int n=0;n<6;n++)
//	{
//		printf("%c",*(array+n));
//	}
//	
//	char a;
//	scanf("%c",&a);
//	printf("%c",a);
//	
//	int i,j;
//	for (i = 1;i<=9;i++)
//	{
//		for (j = 1;j<=i;j++)
//		{
//			printf("%d*%d=%d\t",i,j,i*j);//\t:制表符！ 
//		}
//		printf("\n");
//	}
	
	
	
//	
//	int y,i,max = 0;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&y);
//		max = max>y?max:y;
//		printf("%d\n",max);
//	 } 
//	
//	int a,b,c = 0;
//
do{
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a)
	{
		if (a==b||b==c||a==c)
		{
			
			if(a==b&&b==c&&a==c) 
			{
				printf("是等边三角形");
			}
			
			else
			{
				printf("是等腰三角形");
			}
		}
		
		else if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		{
			printf("是直角三角形"); 
		}
		
		else
		{
			printf("是普通三角形");
		}
		
	}
	else
	{
		printf("非三角形"); 
	}
}while(a!=-1);
while(a==-1)
{
	break;
}
return 0;
 } 
