
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define  row 3
#define  col 3

void init_board(char arr[row][col],int rows, int cols);
void print_board(char arr[row][col], int rows, int cols);
void player_move(char arr[row][col], int rows, int cols);
void computer_move(char arr[row][col], int rows, int cols);
char IsWin(char arr[row][col], int rows, int cols);
int IsFull(char arr[row][col], int rows, int cols);
