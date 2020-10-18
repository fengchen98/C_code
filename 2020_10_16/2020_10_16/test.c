#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//判断一个字符串是否为另外一个字符串旋转之后的字符串。
int	Judge(char* arr1, char* arr2)
{
	int i = 0;
	int j = 0;
	int len = strlen(arr1);
	  for(j=0; j<len; j++)
    	{
    		{
    			char tmp = arr1[0];
    			for(i=0; i<len-1; i++)
    			{
    				arr1[i] = arr1[i+1];
    			}
    			arr1[len-1] = tmp;
    		}
    		if(0 == strcmp(arr1, arr2))
    		{
    		return 1;
    		}
    	}
	  return 0;

}

int main()
{
	char str1[10] = "";
	char str2[10] = "";
	printf("请输入字符串str1:");
	scanf("%s",&str1);
	printf("请输入字符串str2:");
	scanf("%s",&str2);
	printf("str1:%s\n",str1);
	printf("str2:%s\n",str2);
	Judge(str1, str2);
	if(1 == Judge(str1, str2))
	{
		printf("是旋转后的字符串！\n");
	}
	if(0 == Judge(str1, str2))
	{
		printf("不是旋转后的字符串！\n");
	}

}
//int greater(int x1, int x2)
//{
//	return x1 > x2 ? 1 : 0;
//}
//
//int less(int x1, int x2)
//{
//	return x1 < x2 ? 1 : 0;
//}
//
//
//void bubble_sort(int* a, int n, int(*p_compreae)(int, int))
//{
//	int end=0;
//	for (end = n - 1; end > 0; --end)
//	{
//		int i=0;
//		for ( i = 0; i < end; ++i)
//		{
//			//if (a[i + 1] < a[i])
//			if (p_compreae(a[i + 1], a[i]))
//			{
//				int tmp = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int *arr,int size)
//{
//	int i=0;
//	for(i=0;i<size;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//	int main()
//	{
//	int a[10] = { 9, 3, 2, 6, 5, 7, 1, 8, 0, 4 };
//	int i=0;
//	bubble_sort(a, 10, less);
//	print(a,10);
//	/*for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");*/
//
//	bubble_sort(a, 10, greater);
//	print(a,10);
//
//	/*for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");*/
//	return 0;
//}



//冒泡排序
//int greater(int x1, int x2)
//{
//	return x1 > x2 ? 1 : 0;
//}
//
//int less(int x1, int x2)
//{
//	return x1 < x2 ? 1 : 0;
//}
//
//void bubble_sort(int *arr,int size,int(* p_compare)(int,int))
//{
//	int i=0;
//	for(;i<size-1;i++)
//	{
//		int j=0;
//		for(;j<size-1-i;j++)
//		{
//			if(p_compare(arr[j+1],arr[j]))
//			{
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//			}
//		}
//	}									
//}
//void print(int *arr,int size)
//{
//	int i=0;
//	for(i=0;i<size;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10]={5,1,4,2,9,7,3,8,6,0};
//	bubble_sort(arr,10,greater);
//	print(arr,10);
//	bubble_sort(arr,10,less);
//	print(arr,10);
//	return 0;
//}