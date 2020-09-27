#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int n=9;
	float *pFloat=(float *)&n;
	printf("%d\n",n); //9
	printf("%f\n",*pFloat);//0
	*pFloat=9.0;
	printf("%d\n",n);//1091567616
	printf("%f\n",*pFloat);//9.0
	return 0;
}
////杨辉三角
//int main()
//{
//	int n=0;
//	int i=0;
//	int j=0;
//	int arr[15][15]={1};
//	printf("请输入要打印几行杨辉三角:");
//	scanf("%d",&n);
//	for (i = 1; i < n; i++) 
//	{
//		arr[i][0] = 1; 
//		for (j = 1; j <= i; j++) 
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1]; 
//		}
//	}
//	for (i = 0; i < n; i++) 
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//  char a[1000] = {0};
//  int i=0;
//  for(i=0; i<1000; i++)
//  {
//    a[i] = -1-i;
//  }
//  printf("%d",strlen(a));
//  return 0;
//}


//int main()
//{
//  unsigned char a = 200;
//  //0000 0000 0000 0000 0000 0000 1100 1000
//  unsigned char b = 100;
//  //0000 0000 0000 0000 0000 0000 0110 0100
//  unsigned char c = 0;
//  c = a + b;
//  //a+b  
//  //0000 0000 0000 0000 0000 0000 1100 1000
//  //0000 0000 0000 0000 0000 0000 0110 0100
//  //0000 0000 0000 0000 0000 0001 0010 1100
//  printf("%d %d", a+b,c);
//  return 0;
//
//}


//int main()
//{
// int i=-20;
// unsigned int j=10;
// //a= 1000 0000 0000 0000 0000 0000  0001 0100
// //fan1111 1111 1111 1111 1111 1111  1110 1011
// //bu 1111 1111 1111 1111 1111 1111  1110 1100
//
// //b= 0000 0000 0000 0000 0000 0000  0000 1010
//
// //he 1111 1111 1111 1111 1111 1111  1111 0110
// //fan1000 0000 0000 0000 0000 0000  0000 1001
// //yuan 1000 0000 0000 0000 0000 0000 0000 1010
// printf("%d\n",i+j);
//return 0;
//}



//int main()
//{
//	char a=128;
//	printf("%u\n",a);
//	char b=-128;
//	printf("%u\n",a);
//
//	return 0;
//}




////写一个代码测试当前机器是采用大端存储还是小端存储
//int main()
//{
//	int a = 1;
//	char *ch=(char *)&a;
//	if(*ch == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}