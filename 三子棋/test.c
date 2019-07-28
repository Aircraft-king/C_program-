
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu() {

	printf("*************************\n");
	printf("*****    1 . play   *****\n");
	printf("*****    0 . exit   *****\n");
	printf("*************************\n");

}
void game() {
	
	char arr[row][col] = {0};
	char ret = 0;
	srand((unsigned int)time(NULL));
    //初始化棋盘
	init_board(arr, row, col);
	print_board(arr, row, col);
	while (1) {
		player_move(arr,row,col);
		ret = IsWin(arr, row, col);
		if (ret != 'C')
    	break;
		print_board(arr, row, col);
		computer_move(arr, row, col);
		ret = IsWin(arr, row, col);
		if (ret != 'C')
		break;
		print_board(arr, row, col);
	}
	if (ret == '#')
	{
	printf("电脑赢\n");
	}
	else if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
	print_board(arr, row, col);
}
void test() {
	int input = 0;
	menu();
	do {
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入数字违法，请输入0或1\n");
			break;
		}
	} while (input);

}
int main() {
	test();
	return 0;
}