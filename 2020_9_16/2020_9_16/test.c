#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//��ӡ����
int main()
{
	int i = 0;
	int line = 0;
	printf("������Ҫ��ӡ������");
	scanf("%d", &line);
	for(i=0;i<line;i++)
	{
		int j=0;
		for(j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		for(j=0; j<2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");

	}

	for(i=0;i<line-1;i++)
	{
		int j=0;
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*(line-1-i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



////��ӡˮ�ɻ���(���0��100000֮������С�ˮ�ɻ����������)
//int main()
//{
//	int i = 0;
//	for(i=1; i<100000; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while(tmp/10)
//		{
//			count++;
//			tmp = tmp/10;
//		} 	
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow((double)(tmp%10), count);
//			tmp = tmp/10;
//		}
//		if(sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


////�������(��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������)
//int sum(int num)
//{
//	int i=0;
//	int ret=0;
//	for(;i<5;i++)
//	{
//		ret=ret+num;
//		num=num*10+num;
//	}
//	return ret;
//}
//int main()
//{
//	int num=0;
//	int ret=0;
//	printf("������һ������");
//	scanf("%d",&num);
//	ret=sum(num);
//	printf("%d\n",ret);
//	return 0;
//}


////�ַ�������
//void  reverse(char* str)
//{
//	char* start=str;
//	char* end=str+strlen(str)-1;
//	while(start<end)
//	{
//		char temp=*start;
//		*start=*end;
//		*end=temp;
//		start++;
//		end--;
//	}
//}
//void print(char* arr)
//{
//	while(*arr!='\0')
//	{
//		printf("%c ",*arr);
//		arr+=1;
//	}
//	printf("\n");
//}
//int main()
//{
//	char str[]="abcdef";
//	print(str);
//	reverse(str);
//	print(str);
//	return 0;
//}



////ʹ��ָ���ӡ��������
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int* p=arr;
//	int i=0;
//	for(;i<10;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}
////����ָ��
//int main()
//{
//  int a=10;
//  int* pa=&a;
//  int** ppa=&pa;
//return 0;
//}
//int my_strlen1(char* str)
//{
//	char * start=str;
//	while(*str !='\0')
//	{
//		str++;
//	}
//	return str-start;
//}
//int my_strlen(char* str)
//{
//	int count=0;
//	while(*str !='\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[]="abcdef";
//	
//	int len2=my_strlen1(arr);
//	printf("%d\n",len2);
//	return 0;
//}
//ָ���ȥָ��õ�����ָ���ָ��֮��Ԫ�صĸ���
//ǰ�᣺����ָ��ָ��ͬһ��ռ�
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%d",&arr[9]-&arr[0]);
//return 0;
//}
//int main()
//{
//	char arr[]={'a','b','c','d'};
//	char * p=arr;
//	int i=0;
//	for(;i<4;i++)
//	{
//	 printf("%c ",*(p+i));
//	}
// return 0;
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int * pa=arr;
//	int i=0;
//	for(;i<10;i++)
//	{
//	printf("%d ",*(pa+ i));
//	}
//
//	return 0;
//}