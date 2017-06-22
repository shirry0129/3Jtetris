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
		break;
	case 'O':
		field[1][1].is_buried = true;
		field[2][1].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		break;
	case 'S':
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[1][1].is_buried = true;
		field[2][1].is_buried = true;
		break;
	case 'Z':
		field[0][1].is_buried = true;
		field[1][1].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		break;
	case 'J':
		field[0][1].is_buried = true;
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		break;
	case 'L':
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
		field[2][1].is_buried = true;
		break;
	case 'T':
		field[1][1].is_buried = true;
		field[0][2].is_buried = true;
		field[1][2].is_buried = true;
		field[2][2].is_buried = true;
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
