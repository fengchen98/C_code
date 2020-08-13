#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i=1;
	for(;i<=100;i++){
		if(0==i%3){
		printf("%d  ",i);
		}
	}
return 0;
}
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	int temp=0;
//	printf("请输入三个数字:");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b){
//	   temp=a;
//	   a=b;
//	   b=temp;
//	}
//	if(a<c){
//	   temp=a;
//	   a=c;
//	   c=temp;
//	}
//	if(b<c){
//	   temp=b;
//	   b=c;
//	   c=temp;
//	}
//	printf("三个数从大到小依次为：%d %d %d\n",a,b,c);
//return 0;
//}
//int main()
//{
//	int i=1;
//	for(;i<=100;i++){
//		if(i%2==1){
//		printf("%d ",i);
//		}
//	}
//return 0;
//}