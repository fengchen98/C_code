#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
 char str[]="hello fengchen";
 printf("%d %d\n",sizeof(str),strlen(str));
return 0;
}
//int main()
//{
//	int arr1[10]={1,2,3,4,5,6};
//	int arr2[]={1,2,3,4,5,6};
//	//int arr3[]=(1,2,3,4,5,6);
//	int arr3[]={(1,2,3,4,5,6)};
//return 0;
//}