#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求出两个数字中二进制不同的位数
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



//打印整数二进制的奇数位和偶数位
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



////交换两个变量（不创建临时变量）
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







//求一个数字二进制中1的个数
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