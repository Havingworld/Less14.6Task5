﻿/*
Задание. Для вещественной матрицы M размером 4х4 надо осуществить её преобразование в диагональную. Напомню, что диагональная матрица
— это такая матрица, у которой все элементы вне диагонали равны нулю. Диагональ матрицы, в свою очередь — это все элементы,
расположенные по диагонали от первого элемента первой строки до последнего элемента последней строки. Матрица M вводится пользователем
через стандартный ввод, как и раньше. Итоговую диагональную матрицу можно расположить на месте прежней матрицы M, не используя
дополнительных переменных. Результат требуется вывести в консоль для проверки. Ищите именно оптимальное решение — оно довольно простое.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "enter arrow: ";
    int arrow[4][4]{};
    for (int n = 0; n < 4; n++) {
        for (int m = 0; m < 4; m++) {
            cin >> arrow[n][m];
        }
    }

    for (int n = 0; n < 4; n++) {
        for (int m = 0; m < 4; m++) {
            arrow[n][m] = (arrow[n][m] == arrow[n][n]) ? arrow[n][m] : 0;
        }
    }

    for (int n = 0; n < 4; n++) {
        for (int m = 0; m < 4; m++) {
                cout << arrow[n][m] << " ";
        }
        cout << endl;
    }
}


