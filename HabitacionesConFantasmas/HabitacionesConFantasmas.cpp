// HabitacionesConFantasmas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>


int solution(std::vector<std::vector<int>>& matrix) {

    int total = 0;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.max_size(); j++) {
            if (matrix[i][j] == 0) {
                for (int k = i; k < matrix.size(); k++) {
                    matrix[k][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.max_size(); j++) {
            total += matrix[i][j];
        }
    }
    return total;

}

int matrixElementsSum(std::vector <std::vector<int >> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int sum = 0;

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] == 0) {
                break;  // Si el elemento es cero, no considerar los elementos debajo de él
            }
            else {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int r, solutioon(std::vector<std::vector<int>> m) {
    for (int j = 0; j < m[0].size(); j++) for (int i = 0; i < m.size(); i++) {
        if (m[i][j] == 0) break;
        r += m[i][j];
    }
    return r;
}

int main() {

    int x, y; std::cin >> x >> y;
    std::vector<std::vector<int>> matrix;

  

    for (int i = 0; i < x; i++)
    {
        std::vector<int> v;

        for (int j = 0; j < y; j++)
        {
            int w; std::cin >> w;
            v.push_back(w);
        }
        matrix.push_back(v);
    }


}
