#pragma once

#include"cell.h"

const wchar tshape[7] = { L'I',L'O',L'S',L'Z',L'J',L'L',L'T' };

class Tetris {
private:
	Cell field[4][4];
	Color tetris_color;
public:
	Tetris(wchar shape, Point origin);	//コンストラクタ
	void rotation();	//回転
	void lmove();	//左移動
	void rmove();	//右移動
	void fall();	//落下
	void draw();	//描画
};