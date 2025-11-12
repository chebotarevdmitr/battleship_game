#include "../include/Board.h"
#include <iostream>
#include <iomanip>

Board::Board() {
    // Инициализируем поле символом '~' — вода
    grid.resize(SIZE, std::vector<char>(SIZE, '~'));
}

void Board::print() const {
    std::cout << "  ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << std::setw(2) << i << " ";
    }
    std::cout << "\n";

    for (int row = 0; row < SIZE; ++row) {
        std::cout << std::setw(2) << row << " ";
        for (int col = 0; col < SIZE; ++col) {
            std::cout << std::setw(2) << grid[row][col] << " ";
        }
        std::cout << "\n";
    }
}

void Board::setCell(int row, int col, char value) {
    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE) {
        grid[row][col] = value;
    }
}

char Board::getCell(int row, int col) const {
    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE) {
        return grid[row][col];
    }
    return ' '; // вне поля
}