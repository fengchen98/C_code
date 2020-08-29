#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
//三子棋游戏
void menu()
{
	printf("************************************\n");
	printf("******** 1.play     0.exit *********\n");
	printf("************************************\n");
}
void initBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for(; i<row; i++)
	{
		int j=0;
		for(; j <col; j++)
		{
			board[i][j]=' ';
		}
	}
}
void display(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for(; i<row; i++)
	{
		int j=0;
		//打印数据
		for(; j<col; j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if(i<row-1)
		{
			for(j=0; j<col;j++)
			{
				printf("---");
				if(j<row-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void playerMove(char board[ROW][COL],int row,int col)
{  int x=0;
int y=0;
printf("玩家走:>");
while(1)
{
	scanf("%d%d",&x,&y);
	if(x>=1 && x<=row && y>=1 && y<=col)
	{
		if(board[x-1][y-1]==' ')
		{
			board[x-1][y-1]='*';
			break;
		}
		else
		{
			printf("该坐标被占用，请重新输入！\n");
		}
	}
	else
	{
		printf("坐标非法，请重新输入");
	}
}

}
void computerMove(char board[ROW][COL],int row,int col)
{
	printf("电脑走:>\n");
	while(1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if(board[x][y]==' ')
		{
			board[x][y] = '#';
			break;
		}
	}	
}
char judge(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(;i<row;i++)
	{
		if(board[i][0]!=' ' && board[i][0]==board[i][1] && board[i][1]==board[i][2])
		{
			return board[i][0];
		}
	}

	for(;j<col;j++)
	{
		if(board[0][j]!=' ' && board[0][j]==board[1][j] && board[1][j]==board[2][j])
		{
			return board[0][j];
		}
	}
	if(board[0][0]!=' ' && board[0][0]==board[1][1] && board[1][1]==board[2][2])
	{
		return board[0][0]; 
	}
	if(board[0][2]!=' ' && board[0][2]==board[1][1] && board[1][1]==board[2][1])
	{
		return board[0][2]; 
	}

	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 'N';
			}
		}
	}
	return 'E';

}
void game()
{   
	char board[ROW][COL] = {0};
	char result='N';
	initBoard(board,ROW,COL);
	display(board,ROW,COL);
	while(1)
	{  
		playerMove(board,ROW,COL);
		display(board,ROW,COL);
		result=judge(board,ROW,COL);
		if (result != 'N')
		{
			break;
		}
		computerMove(board,ROW,COL);
		display(board,ROW,COL);
		result=judge(board,ROW,COL);
		if (result != 'N')
		{
			break;
		}
	}
	switch(result)
	{
	case '*':	
		printf("恭喜你，你赢了！！！\n");
		break;
	case '#':
		printf("很遗憾，电脑赢了！！！\n");
		break;
	case 'E':
		printf("你和电脑是平局！！！\n");
		break;
	default:
		break;
	}
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请重试！\n");
			break;
		}
	}while(input);
	return 0;
}



////交换数组
//void swap(int arr1[],int arr2[],int size)
//{
//	int i=0;
//	for(;i<size;i++)
//	{
//		int temp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=temp;
//	}
//}
//void show(int arr[],int size)
//{
//	int i=0;
//	for(; i<size; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5]	= {6,7,8,9,10};
//	int size=sizeof(arr1)/sizeof(arr1[0]);
//	printf("交换前arr1：");
//	show(arr1,size);
//	printf("交换前arr2：");
//	show(arr2,size);
//	swap(arr1,arr2,size);
//	printf("交换后arr1：");
//	show(arr1,size);
//	printf("交换后arr1：");
//	show(arr2,size);
//	return 0;
//}



////冒泡排序
//void bubbleSort(int arr[],int size)
//{
//	int i = 0;
//	for(;i < size-1;i++)
//	{
//		int j=0;
//		for(;j < size-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}  
//	}
//}
//void show(int arr[],int size)
//{
//	int i=0;
//	for(;i < size; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int size = sizeof(arr)/sizeof(arr[0]);
//	bubbleSort(arr,size);
//	show(arr,size);
//	return 0;
//}




//int main(){
//	char arr1[]={'a','b','c','d'};
//	char arr2[]="abcd";
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//
//	return 0;
//}




//#define NUM 10
//void init(int a[],int num){
//	int i = 0;
//	for(; i < num; i++){
//		a[i] = 0;
//	}
//
//}
//void print(int a[],int num){
//	int i = 0;
//	for(; i < num; i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//}
//void reverse(int a[],int num){
//	int temp = 0;
//	int i;
//	for (i = 0; i < num / 2 ; i++)
//	{
//		temp = a[i];
//		a[i] = a[num - i - 1];
//		a[num - i - 1] = temp;
//	}
//}
//int main(){
//	int a[NUM]={1,2,3,4,5,6,7,8};
//	printf("反转之前:\n");
//	print(a,NUM);
//	printf("反转之后:\n");
//	reverse(a,NUM);
//	print(a,NUM);
//	printf("初始化为0:\n");
//	init(a,NUM);
//	print(a,NUM);
//	return 0;
//}









