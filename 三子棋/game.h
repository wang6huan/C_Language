#pragma once

#include <stdio.h>//ͷ�ļ��İ���
#include <stdlib.h>
#include <time.h>


//���ŵĶ���
#define ROW 3
#define COL 3

//����������

//��ʼ�����̵�
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//��Ӯ
char IsWin(char board[ROW][COL], int row, int col);