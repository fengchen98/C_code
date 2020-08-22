#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int isPrime(int n){
	int i = 0;
	for(i=2; i<=sqrt(n*1.0); i++)
	{
		if(0 == n%i)
		{
			return 0;
		}
	}
	return 1;
}
int main(){
	int i=100;
	for(;i<=200;i++){
		if(isPrime(i)==1){
			printf("%d ",i);
		}
	}
	return 0;
}
////实现一个函数，打印乘法口诀表
//void print(int n){
//	int i=1;
//	for(;i<=n;i++){
//		int j=1;
//		for(;j<=i;j++){
//			printf("%d*%d=%d\t",j,i,j*i);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int i=0;
//	scanf("%d",&i);
//	print(i);
//}
////交换两个数字的值
//void swap(int *x,int *y){
//	int temp=*x;
//	*x=*y;
//	*y=temp;
//}
//int main(){
//	int x=0;
//	int y=0;
//	scanf("%d%d",&x,&y);
//	printf("%d %d\n",x,y);
//	swap(&x,&y);
//	printf("%d %d\n",x,y);
//
//return 0;
//}
//int is_leap_year(int year){
//	if(year % 4==0&&year % 100!=0||year % 400==0){
//		return 1;
//	}
//	return 0;
//}
//int main(){
//	int y=0;
//	for(y = 1000;y <= 2000;y++){
//		if(is_leap_year(y)==1){
//			printf("%d ",y);
//		}
//	}
//	return 0;
//}
//int isRun(int n){
//	int i=2;
//	for(;i<=sqrt(n);i++){
//		if(n%i==0){
//			break;
//		}
//	}
//	if(i>n){
//		printf("%d ",n);
//	}
//
//}
//int main(){
//
//return 0;
//}
