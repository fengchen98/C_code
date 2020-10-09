#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针数组
//int main()
//{
//	int arr1[]={1,2,3,4};
//	int arr2[]={2,3,4,5};
//	int arr3[]={3,4,5,6};
//	int* arr4[]={arr1,arr2,arr3};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<4;j++)
//		{				  
//			printf("%d ",arr4[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针(指向数组的指针)
//arr+1  移动一个元素
//&arr+1 跳过一整个数组
//int main()
//{
//	int arr[]={1,2,3,4,5};
//	int(* pa)[5]=&arr;
//	int i=0;
//	/*for(;i<5;i++)
//	{
//	 printf("%d ",(*pa)[i]);
//	}*/
//	for(;i<5;i++)
//	{
//	printf("%d ",*(pa+i));
//	}
//return 0;
//}


//函数指针
  int Add(int x,int y)
  {
  return x+y;
  }
int main()
{
  int (*pf)(int,int)=&Add;
  int sum=(*pf)(2,3);
  printf("%d\n",sum);
return 0;

}