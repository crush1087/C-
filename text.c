	#include<stdio.h>
	#include<string.h>
	#include"game.h"
	void menu()
	{
		printf("*********************************\n");
		printf("**********1.PLAY  0.EXIT*********\n");
		printf("*********************************\n");
	}
	void game()
	{
		//printf("ɨ��\n");
		//�׵���Ϣ�洢
		//1.���ú��׵���Ϣ
		char mine[ROWS][COLS]={0};//11*11
		//2.���������Ϣ
		char show[ROWS][COLS]={0};
		//��ʼ��
		InitBoard(mine,ROWS,COLS,'0');
		InitBoard(show,ROWS,COLS,'*');
		//��ӡ����
		//DisplayBoard(mine,ROW,COL);
		DisplayBoard(show,ROW,COL);
		//������
		SetMine(mine,ROW,COL);
		/*DisplayBoard(mine,ROW,COL);*/
		//ɨ��
		FindMine(mine,show,ROW,COL);
	}
	void  test()
	{
		int input=0;
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("��ѡ��:>");
			scanf_s("%d",&input);
			switch(input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��!\n");
				break;
			}
		}while(input);
	}
	int main()
	{
		test();
		return 0;
	}
