#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//����һ���������飬ʵ��һ��������

//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿��

//����ż��λ������ĺ�벿�֡�
//������
void odd_even(int arr[],int sz)
{
	int temp=0;
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while((left<right)&&arr[left]%2==1)
		{
			left++;
		}
		while((left<right)&&arr[right]%2==0)
		{
			right--;
		}
		if(left<right)
		{
			temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
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




//����һ

//void odd_even(int arr[],int sz)
//{
//	int temp=0;
//	int i = 0;
//	int j = sz - 1;
//	while (i < j)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			arr[i] = arr[i];
//		}
//		else
//			i++;
//		if (arr[j] % 2 == 1)
//		{
//			arr[j] = arr[j];
//		}
//		else
//			j--;
//		if(i<j)
//		{
//			temp=arr[i];
//			arr[i]=arr[j];
//			arr[j]=temp;
//		}
//	}
//}
//int main()
//{
//	int sz=0;
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	sz=sizeof(arr)/sizeof(arr[0]);
//	odd_even(arr,sz);
//	for (; i < sz;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	return 0;
//}




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