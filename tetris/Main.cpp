#include"board.h"
#include"tetris.h"

void Main(){
	const Point borigin(50, 50);
	const Point torigin(140, 50);

	Window::Resize(720, 720);

	Board board(borigin);

	Tetris *tetris = NULL;
	
	while (System::Update()){
		board.draw();
		
		if (!board.tetris_exists) {
			tetris = new Tetris(RandomSelect(tshape), torigin);
			board.tetris_exists = true;
		}

		if (Input::KeyUp.clicked) {
			tetris->rotation();
		}
		if (Input::KeyDown.pressed || System::FrameCount() % 60 == 0) {
			tetris->fall();
		}
		if (Input::KeyLeft.clicked) {
			tetris->lmove();
		}
		if (Input::KeyRight.clicked) {
			tetris->rmove();
		}

		tetris->draw();
	}
}
