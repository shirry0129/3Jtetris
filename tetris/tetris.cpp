#include "tetris.h"

/// <summary>
/// コンストラクタ
/// </summary>
/// <param name="shape">形状</param>
Tetris::Tetris(wchar shape){
	switch (shape) {
	case 'I':
		field[0][1].is_buried = true;
		field[1][1].is_buried = true;
		field[2][1].is_buried = true;
		field[3][1].is_buried = true;
		tetris_color = Color(Palette::Lightblue);
		break;
	case 'O':
		field[1][1].is_buried = true;
		field[2][1].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		tetris_color = Color(Palette::Yellow);
		break;
	case 'S':
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[1][1].is_buried = true;
		field[2][1].is_buried = true;
		tetris_color = Color(Palette::Green);
		break;
	case 'Z':
		field[0][1].is_buried = true;
		field[1][1].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		tetris_color = Color(Palette::Red);
		break;
	case 'J':
		field[0][1].is_buried = true;
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		tetris_color = Color(Palette::Blue);
		break;
	case 'L':
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		field[2][1].is_buried = true;
		tetris_color = Color(Palette::Orange);
		break;
	case 'T':
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

void Tetris::rotation(){

}

bool Tetris::hit_test(){

	return false;
}

void Tetris::move(){

}
