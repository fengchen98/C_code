#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main(){
	int i=1;
	int flag=1;
	double sum=0.0;
	for(;i<=100;i++){
		sum+=1.0/i*flag;
		flag=-flag;
	}
	printf("%2f\n",sum);
	return 0;
}
////二分查找法
//int main(){
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int n=7;
//	int left=0;
//	int right=sizeof(arr)/sizeof(arr[0]);
//	int mid=0;
//	while(left<=right){
//		mid=(left+right)/2;
//		if(arr[mid]>n){
//			right=mid-1;
//		}else if(arr[mid]<n){
//			left=mid+1;
//		}else{
//			printf("找到了，下标是%d\n",mid);
//			break;
//		}
//	}
//	if(left>right){
//		printf("%d找不到！\n",n);
//	}
//	return 0;
//}
////猜数字
//#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//void menu(){
//	printf("*******************************************\n");
//	printf("****************    1.play  ***************\n");
//	printf("****************    0.exit  ***************\n");
//	printf("*******************************************\n");
//}
//void game(){	
//	int guess=0;
//	int ret=rand()%100+1;
//	while(1){
//		printf("请猜数字：");
//		scanf("%d",&guess);
//		if(guess>ret){
//			printf("猜大了\n");
//		}else if(guess<ret){
//			printf("猜小了\n");
//		}else{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//int main(){
//	int input=0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch(input){
//		case 0:
//			printf("游戏结束！\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("输入有误，请重试！\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}
////在屏幕上输出9*9口诀表
//int main(){
//	int i=1;
//	for(;i<10;i++){
//		int j=1;
//		for(;j<=i;j++){
//			printf("%d*%d=%d\t",j,i,j*i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////求十个数中的最大值
//int main(){
//	int i=1;
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max=arr[0];
//	int length=sizeof(arr)/sizeof(arr[0]);
//	for(;i<length;i++){
//		if(arr[i]>max){
//			max=arr[i];
//		}
//	}
//	printf("最大值为%d\n",max);
//	return 0;
//}
//int main(){
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b-5;
//	}
//	printf("%d\n", a);
//return 0;
//}
//int main(){
//	int i=1;
//	while(i<3){
//	printf("hehe");
//	i++;
//	}
//return 0;
//}

//模拟输入密码
//int main(){
//	int i=0;
//	char password[20]={0};
//	for(;i<3;i++){
//		printf("请输入密码：");
//		scanf("%s",&password);
//		if(strcmp(password,"1234536")==0){
//			printf("密码正确\n");
//			break;
//		}else{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if(i==3){
//		printf("三次机会已用完，程序结束！！！\n");
//	}
//	return 0;
//}
//#include<string.h>
//#include<windows.h>
//演示多个字符从两端向中间移动
//int main(){
//	char arr1[]={"welcome to bit!!!!!"};
//	char arr2[]={"###################"};
//	int left=0;
//	int right=strlen(arr1)-1;
//	while(left<=right){
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}

