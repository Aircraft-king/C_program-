#include"game.h"
//初始化棋盘
void init_board(char arr[row][col],int rows, int cols) {
	int a = 0;
	int b = 0;
	for (a = 0; a < rows; a++) {
		for (b = 0; b < cols; b++) {
			arr[a][b] = ' ';
		}
	}

}
//打印棋盘
void print_board(char arr[row][col], int rows, int cols) {
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		
		for (j = 0; j < cols; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < cols - 1)
				printf("|");
	}
		printf("\n");
		if (i < rows - 1)
		{
			for (j = 0; j < cols; j++)
			{
				printf("---");
				if (j < cols - 1)
				printf("|");
			}
			printf("\n");
		}
	}
}
//玩家移动
void player_move(char arr[row][col], int rows, int cols) {
	int x = 0;
	int y = 0;
	
	printf("玩家请下棋\n");
	while (1){
		
	printf("请输入要下的坐标：>");
	scanf("%d%d", &x, &y);
	if (x >= 1 && x <= rows && y >= 1 && y <= cols) {
		if (arr[x - 1][y - 1] == ' ') {
			arr[x - 1][y - 1] = '*';
			break;
		}
		else
			printf("此处已有落子\n");
	}
	else {
		printf("输入坐标非法\n");
	}
 }
}
//电脑移动
void computer_move(char arr[row][col], int rows, int cols) {
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{   
		if ((arr[0][0] == ' ') && (arr[0][1] == '*') && (arr[0][2] == '*')) 
		{ 
			arr[0][0] = '#'; break;
		}
		else if ((arr[0][1] == ' ') && (arr[0][0] == '*') && (arr[0][2] == '*')) { 
			arr[0][1] = '#'; break;
		}
		else if ((arr[0][2] == ' ') && (arr[0][0] == '*') && (arr[0][1] == '*')) {
			arr[0][2] = '#'; break;
		}
		//判断第二行	
		else if ((arr[1][0] == ' ')&&(arr[1][1] == '*'&&arr[1][2] == '*')) { 
			arr[1][0] = '#';	break;
		}
		else if ((arr[1][1] == ' ')&&(arr[1][0] == '*'&&arr[1][2] == '*')) {
			arr[1][1] = '#';	break;
		}
		else if ((arr[1][2] == ' ')&&(arr[1][0] == '*'&&arr[1][1] == '*')) {
			arr[1][2] = '#';	break;
		}
		//判断第三行	
		else if ((arr[2][0] == ' ')&&(arr[2][1] == '*'&&arr[2][2] == '*')) {
			arr[2][0] = '#';	break;
		}
		else if ((arr[2][1] == ' ')&&(arr[2][0] == '*'&&arr[2][2] == '*')) {
			arr[2][1] = '#';	break;
		}
		else if ((arr[2][2] == ' ')&&(arr[2][0] == '*'&&arr[2][1] == '*')) {
			arr[2][2] = '#';	break;
		}
		//判断第一列
		else if ((arr[0][0] == ' ')&&(arr[1][0] == '*'&&arr[2][0] == '*')) {
			arr[0][0] = '#';	break;
		}
		else if ((arr[1][0] == ' ')&&(arr[2][0] == '*'&&arr[0][0] == '*')) {
			arr[1][0] = '#';	break;
		}
		else if ((arr[2][0] == ' ')&&(arr[1][0] == '*'&&arr[0][0] == '*')) {
			arr[2][0] = '#';	break;
		}
		//判断第二列	
		else if ((arr[0][1] == ' ')&&(arr[1][1] == '*'&&arr[2][1] == '*')) {
			arr[0][1] = '#';	break;
		}
		else if ((arr[1][1] == ' ')&&(arr[2][1] == '*'&&arr[0][1] == '*')) {
			arr[1][1] = '#';	break;
		}
		else if ((arr[2][1] == ' ')&&(arr[1][1] == '*'&&arr[0][1] == '*')) {
			arr[2][1] = '#';	break;
		}
		//判断第三列
		else if ((arr[0][2] == ' ')&&(arr[1][2] == '*'&&arr[2][2] == '*')) { 
			arr[0][2] = '#';	break;
		}
		else if ((arr[1][2] == ' ')&&(arr[2][2] == '*'&&arr[0][2] == '*')) { 
			arr[1][2] = '#';	break;
		}
		else if ((arr[2][2] == ' ')&&(arr[1][2] == '*'&&arr[0][2] == '*')) { 
			arr[2][2] = '#';	break;
		}
		//判断左对角线	
		else if ((arr[0][0] == ' ')&&(arr[1][1] == '*'&&arr[2][2] == '*')) {
			arr[0][0] = '#';	break;
		}
		else if ((arr[1][1] == ' ')&&(arr[2][2] == '*'&&arr[0][0] == '*')) {
			arr[1][1] = '#';	break;
		}
		else if ((arr[2][2] == ' ')&&(arr[1][1] == '*'&&arr[0][0] == '*')) { 
			arr[2][2] = '#';	break;
		}
		//判断右对角线	
		else if ((arr[0][2] == ' ')&&(arr[1][1] == '*'&&arr[2][0] == '*')) {
			arr[0][2] = '#';	break;
		}
		else if ((arr[1][1] == ' ')&&(arr[2][0] == '*'&&arr[0][2] == '*')) {
			arr[1][1] = '#';	break;
		}
		else if ((arr[2][0] == ' ')&&(arr[1][1] == '*'&&arr[0][2] == '*')) {
			arr[2][0] = '#';	break;
		}
		else 	
		{	 		
			x = rand() % 3;		
			y = rand() % 3;		 
			if (arr[x][y] != ' ')
			{			
				continue;			
			}			
			else {		
				arr[x][y] = '#';
				break;			
			}
			break;
		}	
	}
}
//判断是否有胜利
char IsWin(char arr[row][col], int rows, int cols) {
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		if (arr[i][0] == arr[i][1] &&
			arr[i][1] == arr[i][2] && arr[i][0] != ' ')
		{
			return arr[i][0];
		}
	}
	for (i = 0; i < cols; i++)
	{
		if (arr[0][i] == arr[1][i] &&
			arr[1][i] == arr[2][i] && arr[0][i] != ' ')
			return arr[0][i];
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
	{
	return arr[1][1];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	//判断平局
	if (IsFull(arr, row, col))
	{
		return 'Q';//平局
	}
	return 'C';
}
//判断棋盘是否满了
 int IsFull(char arr[row][col], int rows, int cols) {
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
    {
		for (j = 0; j < cols; j++)
		{
			if (arr[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
	
