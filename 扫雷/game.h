#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <time.h>  

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define NUM_MINE 10


void init_board(char mine[ROWS][COLS], int rows, int cols, char set);
void display_board(char show[ROWS][COLS], int  row, int  col);
void set_mine(char show[ROWS][COLS], int  row, int  col);
void find_mine( char mine[ROWS][COLS],char show[ROWS][COLS], int  row, int  col);
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y);