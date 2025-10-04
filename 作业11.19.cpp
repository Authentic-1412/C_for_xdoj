#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()

{
//	int tar = 1001;
//	int up = 2000; 
//	int down = 0;
//	int a = 0;
//	srand((unsigned int)time(NULL));
//	rand()%up+1;
//	while(rand() != tar)
//	{
//		if(rand()<tar)
//		{
//			printf("小了");
//			a = rand(); 
//			a = a + rand()%up - a + 1;
//			printf(" %d\n",a);
//			
//		}
//		else
//		{
//			printf("大了");
//			a = rand()
//			a = rand()%a + 1;
//			printf(" %d\n",a);
//		}
//	}
//	
//	long long second = 285341109;
//	int minute,hour,day,m1,h1,d1;
//	//scanf("%lld",&second);//必须是lld！ld读取不完整！ 
//	minute = second/60;
//	m1 = second%60;
//	hour = minute/60;
//	h1 = minute%60;
//	day = hour/24;
//	d1 = hour%24;
//	printf("%d %d\n",++day,day--); 
//	printf("%d\n",++day);
//	printf("%d\n",day--);
//	printf("%ddays %dhours %dminutes %dseconds\n",day,d1,h1,m1);
//	getchar();
	
	
	printf("value  size\n");
	int a = 112;
	printf("%2d %6d\n",a,sizeof(a));
	short b = (short)a;
	printf("%2d %6d\n",b,sizeof(b));
	long c =(long)a;
	printf("%2d %6d\n",c,sizeof(c));
	float d = (float)a;
	printf("%f %d\n",d,sizeof(d));
	double e = (double)a;
	printf("%lf %d\n",e,sizeof(e));
	char h = (char)a;
	printf("%c %d\n",h,sizeof(h));
	return 0;
}
