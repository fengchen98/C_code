#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
//��������Ϸ
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
	  //��ӡ����
	  for(; j<col; j++)
	  {
	    printf(" %c ",board[i][j]);
		if(j<col-1)
			printf("|");
	  }
	  printf("\n");
   	   //��ӡ�ָ���
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
   printf("�����:>");
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
	  	 printf("�����걻ռ�ã����������룡\n");
	  }
   }
   else
   {
      printf("����Ƿ�������������");
   }
   }
  
}
void computerMove(char board[ROW][COL],int row,int col)
{
	printf("������:>\n");
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
		printf("��ϲ�㣬��Ӯ�ˣ�����\n");
		break;
	case '#':
		printf("���ź�������Ӯ�ˣ�����\n");
		break;
	case 'E':
		printf("��͵�����ƽ�֣�����\n");
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
	  printf("��ѡ��");
	  scanf("%d",&input);
	  switch(input)
	  {
	  case 1:
		  game();
		  break;
	  case 0:
		  printf("�˳���Ϸ\n");
		  break;
	  default:
		  printf("�������������ԣ�\n");
		  break;
	  }
   }while(input);
   return 0;
}


//#define NUM 10
//void init(int a[],int num){
//	int i = 0;
//	for(; i<num; i++){
//	a[i] = 0;
//	}
//	
//}
//void print(int a[],int num){
//	int i = 0;
//	for(; i < num; i++){
//	printf("%d ",a[i]);
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
//	printf("��ת֮ǰ:\n");
//	print(a,NUM);
//	printf("��ת֮��:\n");
//	reverse(a,NUM);
//	print(a,NUM);
//	printf("��ʼ��Ϊ0:\n");
//	init(a,NUM);
//	print(a,NUM);
//return 0;
//}


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
//   	printf("%d\n",sizeof(arr1));
//   	printf("%d\n",sizeof(arr2));
//   	printf("%d\n",strlen(arr1));
//   	printf("%d\n",strlen(arr2));
//
//return 0;
//}