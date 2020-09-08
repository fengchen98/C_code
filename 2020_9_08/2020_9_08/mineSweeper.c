#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void menu()
{
	printf("*******************************************\n");
	printf("***************** 1.play ******************\n");
	printf("***************** 0.exit ******************\n");
	printf("*******************************************\n");
}
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i = 0;
	int j = 0;
	for(i = 0; i<rows; i++)
	{
		for(j = 0; j< cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Display(char board[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for(i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i = 1; i<=row; i++)
	{
		printf("%d ",i);
		for(j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS],int row,int col)
{
	int count=EASY_COUNT;
	while(count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if(board[x][y] == '0')
		{
			board[x][y] = '1';
			count = count - 1;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS],int x,int y)
{
	return  mine[x-1][y] + mine[x-1][y-1] + mine[x][y-1] + mine[x+1][y-1]
	+ mine[x+1][y] + mine[x+1][y+1] + mine[x][y+1] + mine[x-1][y+1] 
	-8*'0';
}
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win < ROW * COL - EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d%d",&x,&y);
		if(x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж�x,y�����Ƿ�����
			if(mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				Display(mine,row,col);
				break;
			}
			else
			{
				int count = GetMineCount(mine,x,y);
				show[x][y] = count + '0';
				Display(show,row,col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�\n");
		}

	}
	if(win == ROW*COL-10)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		Display(mine,row,col);
	}

}
void game()
{
	//��Ų��úõ���
	char mine[ROWS][COLS];
	//����Ų�����׵���Ϣ
	char show[ROWS][COLS];
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	Display(show,ROW,COL);
	SetMine(mine,ROW,COL);
	Display(mine,ROW,COL);
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ�񣺡�");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("��������\n");
			break;
		}
	}while(input);
	return 0;
}