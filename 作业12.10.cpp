#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<float.h>
#include<math.h>
#define A +1

int main()
{
	printf("%d\n",sizeof(float));//4
	printf("%d\n",sizeof(double));//8
	int o=pow(2,32);
	printf("%d\n",o);
	printf("%d\n",INT_MAX);
	printf("%d\n",CHAR_BIT);
	printf("%d\n",SCHAR_MAX);
	printf("%d\n",UCHAR_MAX);
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%ld\n",LONG_MAX);
	printf("%ld\n",LLONG_MAX);
	printf("%ld\n",LLONG_MIN);
//	int a=2 A;
//	printf("%d",a);
//	int b=a+A;
//	printf("%d",b);
//	char arr[1000]={"1234"};
//	printf("%d\n",strlen(arr));
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(int));
	
	//二维数组找最大值并定位 
//	int a[3][6];
//	int i=0,j=0,max=0,row,column;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<6;j++)
//		{
//			scanf("%d",a[i]+j);
//		}
//	}
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<6;j++)
//		{
//			if(max<a[i][j])
//			{
//				max=a[i][j];
//				row=i+1;
//				column=j+1;
//			}
//		}
//	}
//	printf("%d %d %d",max,row,column);
//	
//	char arr[5]={"1234"};

	/*字符串初始化可以是{"0"}{'0'}{0}
	字符串不初始化，默认全空，printf不打印空(\0)*/ 
//	scanf("%s",arr);
	/*以空格作为读取结束标志，并不再读取后面的值，连续读取只能用循环*/ 
//	gets(arr);
	/*gets()输入字符串，空格作为字符输入，只认回车作为结束标志。 
	和 scanf("%[^\n]",arr);是等效的 */
//	for (i=4;i>=0;i--)
//	{
//		printf("%c",arr[i]);
//	}
	return 0;
}
