#include"board.h"

void Main(){
	const Point origin(50, 50);

	Window::Resize(720, 720);

	Board board(origin);
	
	while (System::Update()){
		board.draw();
	}
}
