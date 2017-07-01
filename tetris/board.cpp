#include "board.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="start">����̍��W</param>
Board::Board(Point origin) {
	int i, j;

	tetris_exists = false;
	
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 23; j++) {
			board[i][j].cell = Rect(origin - Point(30, 60) + Point(i * 30, j * 30), 30);
		}
	}

	for (i = 0; i < 23; i++) {
		board[0][i].is_buried = true;
		board[11][i].is_buried = true;
	}

	for (i = 0; i < 12; i++) {
		board[i][22].is_buried = true;
	}
}

/// <summary>
/// �s��������
/// </summary>
/// <returns>������s�ԍ�(�Ō�)</returns>
int Board::has_buried_line() {
	int result = NULL;
	int i, j;

	for (i = 0; i < 20; i++) {
		for (j = 0; j < 10; j++) {
			if (!board[j][i].is_buried) {
				break;
			}
			else {
				if (j == 9) {
					result = i;
				}
			}
		}
	}

	return result;
}

/// <summary>
/// �Q�[���I�[�o�[����
/// </summary>
/// <returns>�Q�[���I�[�o�[��</returns>
bool Board::has_buried_column(){
	bool is_game_over = false;
	int i, j;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 20; j++) {
			if (!board[i][j].is_buried) {
				break;
			}
			else {
				if (j == 19) {
					is_game_over = true;
				}
			}
		}
		if (is_game_over) {
			break;
		}
	}

	return is_game_over;
}

/// <summary>
/// �s�̗���
/// </summary>
void Board::grate_line() {
	int i, j;
	int line_number;

	do {
		line_number = has_buried_line();

		for (i = line_number; i > 0; i--) {
			for (j = 0; j < 10; j++) {
				board[j][i] = board[j][i - i];
			}
		}

		for (i = 0; i < 10; i++) {
			board[i][0].is_buried = false;
		}
	} while (!(line_number == NULL));
}

/// <summary>
/// �`��
/// </summary>
void Board::draw(){
	int i, j;
	
	for (i = 1; i < 11; i++) {
		for (j = 2; j < 22; j++) {
			if (board[i][j].is_buried) {
				board[i][j].cell.draw(board[i][j].cell_color);
			}
			else {
				board[i][j].cell.drawFrame(0.5, 0.5);
			}
		}
	}
}