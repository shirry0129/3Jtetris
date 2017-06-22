#pragma once

#include<Siv3D.hpp>

typedef struct {
	bool is_buried = false;
	Color cell_color = Color(Palette::Yellowgreen);
	Rect cell;
}Cell;