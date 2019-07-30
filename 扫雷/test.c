#include"game.h"

void menu() {
	printf("***********************\n");
	printf("*****    1.play   *****\n");
	printf("*****    0.exit   *****\n");
	printf("***********************\n");

}

void game() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS,'*');
	display_board(show, ROW,COL);
	set_mine(mine, ROW, COL);
	find_mine(mine,show, ROW, COL);
}

void test() {
	int a = 0;
	srand((unsigned) time(NULL));
	menu();
	while (1) {
		scanf("%d", &a);
		switch (a) {
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误,请输入0或1\n");
		}
	}
}

int main() {
	test();
	return 0;
}