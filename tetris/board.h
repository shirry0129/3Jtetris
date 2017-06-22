#pragma once

#include"cell.h"

class Board {
private:
	Cell board[10][20];
public:
	Board(Point origin);	//コンストラクタ
	int has_buried_line();	//行消し判定
	bool has_buried_column();	//ゲームオーバー判定
	void grate_line();	//行削除後の落下
	void draw();
};