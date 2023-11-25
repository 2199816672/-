#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void chushi (char A[H][L], int a, int b)
{
    int i, j;
	for (i = 0; i < H; i++)
	{
		for (j = 0; j < L; j++)
			A[i][j] = {' '};
	}
	return;
}
void da(char A[H][L], int a, int b)
{
	int i,j, z;
	for(i=0;i<L;i++)
	{
		for (j= 0; j < H; j++)
		{
			printf(" %c ", A[i][j]);
			if (j< H - 1)printf("|");
		}
		printf("\n");
			
		for (z = 0; z < H; z++)
		{	printf("---");
			if (z < H - 1)printf("|");
		}
			printf("\n");
	}
}
void ren(char A[H][L], int a, int b)
{
	int x, y;
	while (1) {
		printf("请输入你要下棋的坐标（x，y），滑稽\n");
		printf("注意x与y之间用一个空格隔开再按回车键哦！！滑稽\n");
		scanf("%d%d",&x,&y);
		if (x > 0 && x < 4 && y>0 && y < 4)
		{
			if (A[x-1][y-1] != 'O' && A[x-1][y-1] != 'X')
			{
				A[x - 1][y - 1] = { 'O' };
				break;
			}
			else printf("笨蛋输入重复啦！！！\n");
		}
		else printf("你自己看看你输入的什么玩意啊！！\n");
	}
}
int pan(char A[H][L], int a, int b)
{
	int i;
	for (i = 0; i < L; i++)
	{
		if (A[i][0] == A[i][1] && A[i][1] == A[i][2] && A[i][0] != ' ')
			return 1;
		else if (A[0][i] == A[1][i] && A[2][i] == A[1][i] && A[1][i] != ' ')
			return 1;
	}
		 if (A[0][0] == A[1][1] && A[0][0] == A[2][2] && A[0][0] != ' ')
			return 1;
		 else if (A[0][2] == A[1][1] && A[0][2] == A[2][0] && A[2][0] != ' ')
			return 1;
		 
		 /*else if (A[0][0] != ' ' && A[1][0] != ' ' && A[2][0] != ' ' && A[1][1] != ' ' && A[0][1] != ' ' && A[0][2] != ' ' && A[2][2] != ' ' && A[2][1] != ' ' && A[1][2] != ' ')
		 {
			 return 2;
		 }*/
	     else return 0;
}
void ji (char A[H][L], int a, int b)
{
	srand(time(NULL));
	int i, j;
	
	while (1)
	{
		i = rand() % 3+0, j = rand() % 3+0;
		if (A[i][j] == ' ' )
		{
			A[i][j] = { 'X' };
			break;
		}
	}
}
//void ping(char A[H][L], int a, int b)
//{
//	if (A[0][0] != ' ' && A[1][0] != ' ' && A[2][0] != ' ' && A[1][1] != ' ' && A[0][1] != ' ' && A[0][2] != ' ' && A[2][2] != ' ' && A[2][1] != ' ' && A[1][2] != ' ')
//		printf("这都可以平局真是太逊啦！\n");
//}