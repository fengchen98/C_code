#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>




//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//int main()
//{
//	int arr[4] = { 0 }; 
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		arr[i] = 1; 
//		if ((arr[0] != 1) + (arr[2] == 1) + (arr[3] == 1) + (arr[3] != 1) == 3)
//		{
//			break; 
//		}
//		arr[i] = 0; 
//	}
//	putchar('A' + i); 
//	return 0;
//}



////杨辉三角
//int main()
//{
//	int arr[20][20]={1};
//	int i=0;
//	int j=0;
//	int n=0;
//	scanf("%d",&n);
//	for(i=1;i<n;i++)
//	{
//		arr[i][0]=1;
//		for(j=1;j<=i;j++)
//		{
//			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
//		}
//	}
//	//打印
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//  char a[1000] = {0};
//  // -1-1=-2......-1-127 =-128.....-1-128=127 -1-129=126 
//  // -1-130=125   -1-255=0；
//  //-1......-128   127.....1   128+127=255
//  //-129
//  //原码  1000 0000 0000 0000 0000 0000 1000 0001
//  //反码  1111 1111 1111 1111 1111 1111 0111 1110
//  //补码  1111 1111 1111 1111 1111 1111 0111 1111
//  //char类型在内存中只能存取八位 0111 1111 即127
//
//  int i=0;
//  for(i=0; i<1000; i++)
//  {
//    a[i] = -1-i;
//  }
//  //strlen(a)统计字符串的长度   \0是字符串结束的标志
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
//  //a+b=300
//  //0000 0000 0000 0000 0000 0001 0010 1100
//  //c=0010 1100    44
//  c = a + b;
//  printf("%d %d", a+b,c);
//  return 0;
//}



//int main()
//{
//  char str1[] = "hello bit.";
//  char str2[] = "hello bit.";
//  char *str3 = "hello bit.";
//  char *str4 = "hello bit.";
//  if(str1 == str2)
//    printf("str1 and str2 are same\n");
//  else
//    printf("str1 and str2 are not same\n");
//
//  if(str3 == str4)
//    printf("str3 and str4 are same\n");
//  else
//    printf("str3 and str4 are not same\n");
//
//  return 0; 
//}



//int main()
//{
//	int n=9;
//	float *pFloat=(float *)&n;
//	printf("%d\n",n); //9
//	printf("%f\n",*pFloat);//0
//	*pFloat=9.0;
//	printf("%d\n",n);//1091567616
//	printf("%f\n",*pFloat);//9.0
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