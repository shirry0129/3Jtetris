#pragma once

#include<Siv3D.hpp>

typedef struct {
	bool is_buried = false;
	Color cell_color = Color(255, 255, 255, 0);
	Rect cell;
}Cell;