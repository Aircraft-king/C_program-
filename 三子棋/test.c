
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
    //��ʼ������
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
	printf("����Ӯ\n");
	}
	else if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������Υ����������0��1\n");
			break;
		}
	} while (input);

}
int main() {
	test();
	return 0;
}