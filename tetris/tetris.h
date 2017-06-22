#pragma once

#include"cell.h"

class Tetris {
private:
	Cell field[4][4];
	Color tetris_color;
public:
	Tetris(wchar shape);	//コンストラクタ
	void rotation();	//回転
	bool hit_test();	//当たり判定
	void move();	//移動
};