#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void kai()
{
	printf("由于我比较菜，所以本井字棋采用输入坐标的方式，滑稽\n");
	printf("本游戏难度为负数，因为我比较菜不会做算法，滑稽\n");
	printf("希望帅气的游玩者帮我找找bug，滑稽\n");
	printf("蟹蟹啦！滑稽\n");
}
void dan()
{
	int a, b;
	int w, j;
	char A[H][L];

	while (1)
	{
		b = 0;
		scanf("%d", &a);
		if (a == 1) {
			printf("OK,开始弱智游戏，滑稽\n");
			chushi(A, H, L);//初始化滑稽
			da(A, H, L);//打印看看情况啦！！！

			while (1)
			{
				ren(A, H, L);
				da(A, H, L);
				w = pan(A, H, L);
				printf("OK,看电脑的表演，滑稽\n");
				if (w) {
					printf("恭喜你赢了（不赢你也太逊啦！），滑稽\n");
					printf("1.再来一把，滑稽\n");
					printf("0.退出游戏，下次见哦！！！\n");
					break;
				}
				/*ping(A, H, L);*/
				/*if (w == 2)
				{
					printf("这都可以平局真是太逊啦！\n");
					break;
				}*/
				b++;
				if (b == int(floor((L * H) / 2))+1 )
				{
					printf("这都可以平局真是太逊啦！滑稽\n");
					printf("1.再来一把，滑稽\n");
					printf("0.退出游戏，下次见哦！！！\n");
					break;}
				
				
				ji(A, H, L);
				da(A, H, L);
				j = pan(A, H, L);
				if (j) {
					printf("不会吧，你居然这么逊！！！！\n");
					printf("1.再来一把，滑稽\n");
					printf("0.退出游戏，下次见哦！！！\n");
					break;
				}
				
				/*if (j == 2)
				{
					printf("这都可以平局真是太逊啦！\n");
					break;
				}*/
				/*ping(A, H, L);*/




			}
		}
		else if (a == 0) {
			printf("这么快就要走了吗？可惜了，那告辞！！！\n");
			break;
		}
		else {
			printf("你输入的什么玩意你自己看看\n");
			printf("%d\n", a);
		}
	}
}
void cai()
{
	
	printf("---请选择--------------\n");
	printf("\n");
	printf("---1.开始井字棋,滑稽---\n");
	printf("\n");
	printf("---0.结束游戏，告辞----\n");
}
int main ()
{
	kai();
	cai();
	dan();

	return 0;
}