#pragma once

#include"cell.h"

class Tetris {
private:
	Cell field[4][4];
	Color tetris_color;
public:
	Tetris(wchar shape);	//�R���X�g���N�^
	void rotation();	//��]
	bool hit_test();	//�����蔻��
	void move();	//�ړ�
};