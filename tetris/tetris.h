#pragma once

#include"cell.h"

const wchar tshape[7] = { L'I',L'O',L'S',L'Z',L'J',L'L',L'T' };

class Tetris {
private:
	Cell field[4][4];
	Color tetris_color;
public:
	Tetris(wchar shape, Point origin);	//�R���X�g���N�^
	void rotation();	//��]
	void lmove();	//���ړ�
	void rmove();	//�E�ړ�
	void fall();	//����
	void draw();	//�`��
};