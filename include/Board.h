#ifndef BOARD_H   
#define BOARD_H

#include <vector>
#include <string>

class Board {
public:
    Board();  // конструктор
    void print() const;  // вывести поле в консоль
    void setCell(int row, int col, char value);  // установить значение клетки
    char getCell(int row, int col) const;  // получить значение клетки

private:
    static constexpr int SIZE = 10;  // размер поля 10x10
    std::vector<std::vector<char>> grid;  // двумерная сетка
};

#endif // BOARD_H
