#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//递归
void print(int num){
	if(num>9){
		print(num/10);
	}
	printf("%d ",num%10);
}

int main(){
	int num=0;
	scanf("%d",&num);
	print(num);
	return 0;
}


////递归
//int myStrlen(char* str){
//	if(*str!='\0'){
//		return 1+myStrlen(str+1);
//	}
//	else{
//		return 0;
//	}
//}
////非递归
//int myStrlen1(char* str){
//int count=0;
//while(*str!='\0'){
//	count++;
//	str++;
//}
//return count;
//}
//int main(){
//	char arr[]="abcdef";
//	printf("%d\n",myStrlen(arr));
//	printf("%d\n",myStrlen1(arr));
//	return 0;
//}


////非递归
//int fac1(int i){
//	int ret=1;
//	int j=1;
//	for(;j<=i;j++){
//		ret=ret*j;
//	}
//	return ret;
//}
////递归
//int fac2(int n){
//	if(n==1){
//		return 1;
//	}
//	return n*fac2(n-1);
//}
//
//int main(){
//	int n=0;
//	scanf("%d",&n);
//	printf("%d\n",fac1(n));
//	printf("%d\n",fac2(n));
//	return 0;
//}

////使用迭代的方法
//int fib1(int n){
//	int a=1;
//	int b=1;
//	int c=1;
//	while(n>2){
//		c=a+b;
//		a=b;
//		b=c;
//		n--;
//	}
//	return c;
//}
////使用递归的方法
//int fib2(int n){
//	if(n==1||n==2){
//		return 1;
//	}
//	return fib2(n-1)+fib2(n-2);
//}
//int main(){
//	int n=0;
//	scanf("%d",&n);
//	printf("%d\n",fib1(n));
//	printf("%d\n",fib1(n));
//}

////字符串逆序（递归实现）
//void reverse_string(char * string){
//	if(*string!='\0'){
//		reverse_string(string+1);
//		printf("%c",*string);
//	}
//
//}
//int main(){
//	char str[]="abcdef";
//	printf("%s\n",str);
//	reverse_string(str);
//	return 0;
//}
//int DigitSum(int n){
//	if(n<10){
//		return n;
//	}else 
//		return n%10+DigitSum(n/10);
//}
//int main(){
//	int ret=0;
//	ret=DigitSum(1729);
//	printf("ret=%d\n",ret);
//	return 0;
//}
//int MyMi(int i,int k){
//	if(k==0){
//		return 1;
//	}else{
//		return i*MyMi(i,k-1);
//	}
//}
//int main(){
//	int n=0;
//	int k=0;
//	int ret=0;
//	printf("请输入你要计算n的k次方：");
//	scanf("%d %d",&n,&k);
//	ret=MyMi(n,k);
//	printf("ret=%d\n",ret);
//	return 0;
//}





//#include "calc.h"
//int main(){
//	int a=10;
//	int b=20;
//	printf("%d\n",add(a,b));
//	printf("%d\n",sub(a,b));
//	return 0;
//}
//void add(int *p){
//*p+=1;
//}
//int main(){
//	int num=0;
//	printf("%d\n",num);
//	add(&num);
//	printf("%d\n",num);
//	add(&num);
//	printf("%d\n",num);
//	add(&num);
//	printf("%d\n",num);
//return 0;
//}
//int binarySearch(int arr[],int num,int size){
//	int left=0;
//	int right=num-1;
//	int mid=0;
//	while(left<=right){
//		mid=(left+right)/2;
//		if(arr[mid]>num){
//			right=mid-1;
//		}else if(arr[mid]<num){
//			left=mid+1;
//		}else{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main(){
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int num=7;
//	int size=sizeof(arr)/sizeof(arr[0])-1;
//	int ret=binarySearch(arr,num,size);
//	if(ret==-1){
//		printf("没有找到该数字！！！\n");
//	}else{
//		printf("找到了数字%d，下标是%d\n",num,ret);
//	}
//	return 0;
//}