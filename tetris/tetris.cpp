#include "tetris.h"

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="shape">形状</param>
Tetris::Tetris(wchar shape, Point origin) {
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			field[i][j].cell = Rect(origin + Point(i * 30, j * 30), 30);
		}
	}

	switch (shape) {
	case L'I':
		field[0][1].is_buried = true;
		field[1][1].is_buried = true;
		field[2][1].is_buried = true;
		field[3][1].is_buried = true;
		tetris_color = Color(Palette::Lightblue);
		break;
	case L'O':
		field[1][1].is_buried = true;
		field[2][1].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		tetris_color = Color(Palette::Yellow);
		break;
	case L'S':
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[1][1].is_buried = true;
		field[2][1].is_buried = true;
		tetris_color = Color(Palette::Green);
		break;
	case L'Z':
		field[0][1].is_buried = true;
		field[1][1].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		tetris_color = Color(Palette::Red);
		break;
	case L'J':
		field[0][1].is_buried = true;
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		tetris_color = Color(Palette::Blue);
		break;
	case L'L':
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		field[2][1].is_buried = true;
		tetris_color = Color(Palette::Orange);
		break;
	case L'T':
		field[1][1].is_buried = true;
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		tetris_color = Color(Palette::Purple);
		break;
	default:
		break;
	}
}

/// <summary>
/// テトリスの回転
/// </summary>
void Tetris::rotation(){
	int i, j;
	Cell tmp;

	for (i = 0; i < 4; i++) {
		for (j = i; j < 4; j++) {
			if (i != j) {
				tmp = field[i][j];
				field[i][j] = field[j][i];
				field[j][i] = tmp;
			}
		}
	}
}

/// <summary>
/// 左移動
/// </summary>
void Tetris::lmove(){
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			field[i][j].cell.moveBy(-30, 0);
		}
	}
}

/// <summary>
/// 右移動
/// </summary>
void Tetris::rmove() {
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			field[i][j].cell.moveBy(30, 0);
		}
	}
}

/// <summary>
/// 落下
/// </summary>
void Tetris::fall() {
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			field[i][j].cell.moveBy(0, 30);
		}
	}
}

/// <summary>
/// 描画
/// </summary>
void Tetris::draw(){
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (field[i][j].is_buried) {
				field[i][j].cell.draw(tetris_color);
			}
		}
	}
}
