#include<stdio.h>
int main()
{
	int arr[]={0};
	int p = sizeof(arr)/sizeof(arr[0]);
	printf("%d",p);
	//goto
	int num = 0;
	hi:
		 if (num < 5) 
		{
        printf("%d\n", num);
        num++;
        goto hi; // ���ص���ǩhi,ִ�б�ǩ�µ�������� 
        }
 
    printf("���ѭ����\n");
	
	//����߷�
	int i=0,n,max=0;
	int sco[10000]={0}; 
	while(i<=5)
	{
		scanf("%d",sco+i);
		if(*(sco+i)==-1) break;	
		i++;
	}
	n = sizeof(sco)/sizeof(sco[0]);
	for(i=0;i<n;i++)
	{
		max = (max>sco[i])?max:sco[i];
	}
	printf("%d",max);
	//��Ԫһ�η����� 
//	int i,j;
//	for(i = 0;i<10000;i++)
//	{
//		for(j = 0;j<10000;j++)
//		{
//			if(i+j==35&&2*i+4*j==94)
//			{
//				printf("x=%d y=%d",i,j);
//			}
//		}
//	}
	return 0;
}
