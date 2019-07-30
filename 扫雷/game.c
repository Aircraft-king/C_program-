
#include"game.h"

void init_board(char mine[ROWS][COLS], int rows, int cols, char set) {
	int i = 0;
	
	for (i = 0; i < rows ; i++) {
		int j = 0;
		for (j = 0; j < cols ; j++) {
			mine[i][j] = set;
		}
	}
}
 
void display_board(char show[ROWS][COLS], int  row, int  col) {
	int i = 0;	
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++) {
			printf("%d ", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}
}


void set_mine(char show[ROWS][COLS], int  row, int  col) {
	int num =  NUM_MINE;
	while (num) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (show[x][y] == '0') {
			show[x][y] = '1';
			num--;
		}
	}
}


static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{
	int ret = 0;
	ret = GetMineCount(mine, x, y);
	if (ret == 0) {
		show[x][y] = ' ';
		if (x - 1 > 0 && y > 0 && show[x - 1][y] == '*')
			OpenMine(mine, show, row, col, x - 1, y);
		if (x - 1 > 0 && y + 1 <= col && show[x - 1][y + 1] == '*')
			OpenMine(mine, show, row, col, x - 1, y + 1);
		if (x > 0 && y + 1 <= col && show[x][y + 1] == '*')
			OpenMine(mine, show, row, col, x, y + 1);
		if (x + 1 <= row && y + 1 <= col && show[x + 1][y + 1] == '*')
			OpenMine(mine, show, row, col, x + 1, y + 1);
		if (x + 1 <= row && y > 0 && show[x + 1][y] == '*')
			OpenMine(mine, show, row, col, x + 1, y);
		if (x + 1 <= row && y - 1 > 0 && show[x + 1][y - 1] == '*')
			OpenMine(mine, show, row, col, x + 1, y - 1);
		if (x > 0 && y - 1 > 0 && show[x][y - 1] == '*')
			OpenMine(mine, show, row, col, x, y - 1);
		if (x - 1 > 0 && y - 1 > 0 && show[x - 1][y - 1] == '*')
			OpenMine(mine, show, row, col, x - 1, y - 1);
	}
	else
	{
		show[x][y] = GetMineCount(mine, x, y) + '0';
	}
}
void find_mine( char mine[ROWS][COLS],char show[ROWS][COLS],int  row, int  col){
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - NUM_MINE) {
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (show[x][y] == '1') {
				printf("你被炸死了\n");
				display_board(mine, ROW, COL);
				break;
			}
			else {
				int count = GetMineCount(mine, x, y);
				OpenMine(mine, show, row, col, x, y);
				show[x][y] = count + '0';
				display_board(show, ROW, COL);
				win++;
			}
		}
		else {
			printf("输入坐标非法\n");
		}
		if (win == row * col - NUM_MINE) {
		printf("排雷成功\n");
	}
	}
	
}