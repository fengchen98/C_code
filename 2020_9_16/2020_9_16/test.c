#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//����ָ��
int main()
{
  int a=10;
  int* pa=&a;
  int** ppa=&pa;
return 0;
}
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