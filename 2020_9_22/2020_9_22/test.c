#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//输入一个整数数组，实现一个函数，

//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分

//所有偶数位于数组的后半部分。

void odd_even(int arr[],int sz)
{
	int temp=0;
	int i = 0;
	int j = sz - 1;
	while (i < j)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i] = arr[i];
		}
		else
			i++;
		if (arr[j] % 2 == 1)
		{
			arr[j] = arr[j];
		}
		else
			j--;
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
int main()
{
	int sz=0;
	int i=0;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	sz=sizeof(arr)/sizeof(arr[0]);
	odd_even(arr,sz);
	for (; i < sz;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}




//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret=dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//
//	while(*dest++ = *src++ )
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[]="hello";
//	char str[]="!!!!!!" ;
//	printf("%s\n",my_strcpy(str,arr));
//	return 0;
//}




//int my_strlen(const char* str)
//{
//	int count=0;
//	assert(str!=NULL);
//	while(*str!='\0')
//	{
//	count++;
//	str++;
//	}
//	return count;
//
//}
//int main()
//{
//  char str[]="abcded";
//  int len=my_strlen(str);
//  printf("%d\n",len);
//return 0;
//}