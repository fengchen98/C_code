#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//������������ж����Ʋ�ͬ��λ��
int compare(int a,int b)
{
	int temp=a^b;
	int count = 0;
	while(temp)
	{
		temp=temp&(temp-1);
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d",&a,&b);
	c=compare(a,b);
	printf("%d",c);
	return 0;
}



//��ӡ���������Ƶ�����λ��ż��λ
//int main()
//{
//	int a=7;
//	int i=31;
//	for(;i>0;i-=2)
//	{
//		printf("%d ",(a>>i)&1);
//	}
//	printf("\n");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(a>>i)&1);
//	}
//	return 0;
//}



////����������������������ʱ������
//int main()
//{
//	int a=3;
//	int b=5;
//	printf("a=%d b=%d\n",a,b);
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}







//��һ�����ֶ�������1�ĸ���
//int count_one(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int b = count_one(a);
//	printf("%d\n",b);
//
//	return 0;
//}





//int count_one(int n)
//{
//	int count = 0;
//	int i=0;
//	for(; i<32; i++)
//	{
//		if((n>>i) & 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int b = count_one(a);
//	printf("%d\n",b);
//
//	return 0;
//}