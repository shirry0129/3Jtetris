#pragma once

#include"cell.h"

class Board {
private:
	Cell board[12][23];
public:
	bool tetris_exists;	//�e�g���X�����݂��邩

	Board(Point origin);	//�R���X�g���N�^
	int has_buried_line();	//�s��������
	bool has_buried_column();	//�Q�[���I�[�o�[����
	void grate_line();	//�s�폜��̗���
	void draw();		//�`��
};