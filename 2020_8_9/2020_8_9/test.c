#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int Max(int num1,int num2){
	if(num1>num2)
	return num1;
else 
	return num2;
}
int main()
{
int num1=0;
int num2=0;
printf("请输入两个要比较的数字：");
scanf("%d%d",&num1,&num2);
 printf("较大的值为%d\n",Max(num1,num2));
return 0;
}