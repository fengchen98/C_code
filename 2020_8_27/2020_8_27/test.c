#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//汉诺塔 
void move(char pos1,char pos2){
	printf("%c->%c ",pos1,pos2);
}
void hanoi(int n,char pos1,char pos2,char pos3){
	if(n==1){
		move(pos1,pos3);
	}else{
		hanoi(n-1,pos1,pos3,pos2);
		move(pos1,pos3);
		hanoi(n-1,pos2,pos1,pos3);
	}
}
int main(){
	int n=0;
	printf("请输入要移动的盘子数：>");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
}
////青蛙跳台阶
//int jumpFloor(int n){
//	if(n <= 0){
//		return -1;
//	}
//	if(n == 1){
//		return 1;
//	}
//	if(n == 2){
//		return 2;
//	}
//	return jumpFloor(n-1)+jumpFloor(n-2);
//
//}
//int main(){
//	int i=0;
//	scanf("%d",&i);
//	printf("%d\n",jumpFloor(i));
//	return 0;
//}