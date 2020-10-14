#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int find(int (*parr)[3], int *px, int *py, int num)
{
	int x = 0;
	int y = *py - 1;
	while (x < *px && y >= 0)
	{
		if (parr[x][y]<num)
			x++;
		else if (parr[x][y]>num)
			y--;
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int x=3;
	int y=3;
	int ret=-1;
	int num=0;
	printf("请输入一个数字");
	scanf("%d",&num);

	ret=find(arr,&x,&y,num);
	if(ret==1)
	{
		printf("找到了%d，坐标是（%d,%d）\n",num,x,y);
	} else
	{
		printf("没找到%d\n",num);
	}
	return 0;
}
//#include <string.h>
//int main()
//{
////  int a[] = {1,2,3,4};
////
////printf("%d\n",sizeof(a));
////
////printf("%d\n",sizeof(a+0));
////
////printf("%d\n",sizeof(*a));
////
////printf("%d\n",sizeof(a+1));
////
////printf("%d\n",sizeof(a[1]));
////
////printf("%d\n",sizeof(&a));
////
////printf("%d\n",sizeof(*&a));
////
////printf("%d\n",sizeof(&a+1));
////
////printf("%d\n",sizeof(&a[0]));
////
////printf("%d\n",sizeof(&a[0]+1));
////	char *p = "abcdef";
////
////printf("%d\n", sizeof(p));
////
////printf("%d\n", sizeof(p+1));
////
////printf("%d\n", sizeof(*p));
////
////printf("%d\n", sizeof(p[0]));
////
////printf("%d\n", sizeof(&p));
////
////printf("%d\n", sizeof(&p+1));
////
////printf("%d\n", sizeof(&p[0]+1));
////
////
////
////printf("%d\n", strlen(p));
////
////printf("%d\n", strlen(p+1));
////
//////printf("%d\n", strlen(*p));
////
//////printf("%d\n", strlen(p[0]));
////
//////printf("%d\n", strlen(&p));
////
//////printf("%d\n", strlen(&p+1));
////
////printf("%d\n", strlen(&p[0]+1));
////
// //二维数组
//
//int a[3][4] = {0};
//
//printf("%d\n",sizeof(a));
//
//printf("%d\n",sizeof(a[0][0]));
//
//printf("%d\n",sizeof(a[0]));
//
//printf("%d\n",sizeof(a[0]+1));
//
//printf("%d\n",sizeof(*(a[0]+1)));
//
//printf("%d\n",sizeof(a+1));
//
//printf("%d\n",sizeof(*(a+1)));
//
//printf("%d\n",sizeof(&a[0]+1));
//
//printf("%d\n",sizeof(*(&a[0]+1)));
//
//printf("%d\n",sizeof(*a));
//
//printf("%d\n",sizeof(a[3]));
//return 0;
//}