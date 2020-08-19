#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int a=0;
	int b=0;
	int ret=0;
	scanf("%d%d",&a,&b);
	ret=a%b;
	while(ret!=0){
		a=b;
		b=ret;
		ret=a%b;
	}
	printf("最大公约数为%d\n",b);
	return 0;
}
//int main(){
//	int i=1;
//	int sum=0;
//	for(;i<=100;i++){
//		if(i%10==9){
//		sum+=1;
//		}
//		if(i/10==9){
//		sum+=1;
//		}	
//	}
//	printf("1到100之间有%d个9\n",sum);
//return 0;
//}
//void isSu(int n){
//	int i=2;
//	for(;i<n;i++){
//		if(n%i==0){
//			break;
//		}
//	}
//	if(i>=n){
//		printf("%d ",n);
//	}
//}
//int main(){
//	int i=100;
//	for(;i<=200;i++){
//		isSu(i);
//	}
//	return 0;
//}
//void printRun(int n){
//	if(n%4==0&&n%4!=0||n%100==0){
//		printf("%d ",n);
//	}
//}
//int main(){
//	int i=1000;
//	for(;i<=2000;i++){
//		printRun(i);
//	}
//	return 0;
//}
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//        case 1: b = 30;
//        case 2: b = 20;
//        case 3: b = 16;
//        default: b = 0;
//    }
//    return b;
//}
//int main(){
//	printf("%d",func(1));
//return 0;
//}
//int main(){
//int i=1;
//do{
//if(i==5)
//	continue;
//printf("%d ",i);
//i++;
//}while(i<=10);
//}
//int main(){
//int i=0;
//int k=0;
//for(i=0,k=0;k=0;i++,k++){
//k++;
//}
//return 0;
//}
//int main(){
//int i=0;
//
//for(;i<10;i++){
//	int j=0;
//	for(;j<10;j++){
//	printf("hehe\n");
//	}
//}
//return 0;
//}
//int main(){
//	int i=0;
//	for(;i<10;i++){
//		if(i==5){
//		continue;
//		}
//		printf("%d ",i);
//	}
//	return 0;
//}
//使用while循环打印1-10
//int main(){
//	int i=1;
//	while(i<=10){
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//switch语句
//int main(){
//int day=0;
//scanf("%d",&day);
//switch(day){
//case 1:
//	printf("星期一\n");
//	break;
//case 2:
//	printf("星期二\n");
//	break;
//case 3:
//	printf("星期三\n");
//	break;
//case 4:
//	printf("星期四\n");
//	break;
//case 5:
//	printf("星期五\n");
//	break;
//case 6:
//	printf("星期六\n");
//	break;
//case 7:
//	printf("星期天\n");
//	break;
//default:
//	printf("选择错误！！！\n");
//	break;
//}
//}