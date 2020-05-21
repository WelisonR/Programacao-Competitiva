#include <bits/stdc++.h>
#define len(x) (int) (x.size())
using namespace std;
typedef long long ll;

bool isValidNumber(int sudokuBoard[][9], int row, int col, int number) {
    // Verifica se já há um elemento igual a number na linha ou coluna
    for(int i = 0; i < 9; i++) {
        if(sudokuBoard[i][col] == number || sudokuBoard[row][i] == number)
            return false;
    }

    // Verifica se já um elemento igual a number no quadrado 3x3
    int rowStart = row - row%3;
    int colStart = col - col%3;
    for(int i = rowStart; i < rowStart+3; i++) {
        for(int j = colStart; j < colStart+3; j++) {
            if(sudokuBoard[i][j] == number)
                return false;
        }
    }
    
    return true; // Número válido
}

bool solveSudoku(int sudokuBoard[9][9]) {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if(sudokuBoard[i][j] == 0) { // célula vazia
                for(int num = 1; num <= 9; num++) {
                    if(isValidNumber(sudokuBoard, i, j, num)) { // constraint
                        sudokuBoard[i][j] = num; // choice
                        if(solveSudoku(sudokuBoard)) {
                            return true;
                        }
                        else {
                            sudokuBoard[i][j] = 0; // backtrack
                        }
                    }
                }
                return false;
            }
        }
    }

    return true; // todas as células preenchidas
}

void printSudoku(int sudokuBoard[][9]) {
    for(int i = 0; i <= 8; i++) {
        if(i % 3 == 0 && i != 0) {
            cout << "-------------------------------" << '\n';
        }
        for(int j = 0; j <= 8; j++) {
            if(j % 3 == 0 && j != 0) {
                cout << "|";
            }
            cout << " " << sudokuBoard[i][j] << " ";
        }
        cout << '\n';
    }
}

int main(){
    int sudokuBoard[9][9] = { 
        { 3, 0, 6, 5, 0, 8, 4, 0, 0 }, 
        { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
        { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
        { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
        { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
        { 1, 3, 0, 0, 0, 0, 2, 5, 0 }, 
        { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
        { 0, 0, 5, 2, 0, 6, 3, 0, 0 }
    };

    if(solveSudoku(sudokuBoard)) {
        printSudoku(sudokuBoard);
    }
    else {
        cout << "Sem solução!" << '\n';
    }
    
    return 0;
}