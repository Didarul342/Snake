#ifndef __SNAKE_H__
#define __SNAKE_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h> 
#include <windows.h>

#define LEFT -1
#define RIGHT 1
#define UP 2
#define DOWN -2
#define SNAKE_LEN_MAX 100
#define YES 1
#define NO -1
#define SNAKE_FOOD 3
#define WALL 2
#define WEITH 50
#define HIGH 23

extern int enve[HIGH][WEITH];

typedef struct food
{
	//ʳ������
	int row;										
	int col;

	int flag;										//Ҫ����ʳ�
}FOOD, *PFOOD;

typedef struct snake
{
	int row[SNAKE_LEN_MAX];
	int col[SNAKE_LEN_MAX];
	int node;										//�ߵĽ���
	int life;										//�߻��ţ�
	int dir;										//�ߵ��ƶ�����										
}SNAKE, *PSNAKE;

//��ʼ������
PSNAKE init(PFOOD fo);

//���ػ���
void load(PSNAKE pSnake, PFOOD p_food);

//����
void distroy(PSNAKE pSnake);

//�����Ϸ����
void print(PSNAKE pSnake);

//�ж��Ƿ�ײǽ
void set_life(PSNAKE pSnake);

//���ƶ�
void move(PSNAKE pSnake);

//�����߷���
void control_dir(PSNAKE pSnake);

//����ʳ��
void rand_food(PFOOD p_food);

//��ʳ��
void eat_food(PSNAKE pSnake, PFOOD p_food);

//����Ϸ
void play(PSNAKE pSnake, PFOOD p_food);

#endif