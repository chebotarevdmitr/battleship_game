#include "../include/Board.h"

int main() {
    Board board;
    board.setCell(2, 3, 'S');  // поставим корабль
    board.setCell(5, 7, 'X');  // попадание
    board.print();
    return 0;
}