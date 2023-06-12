// PalidromosString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool solution(std::string inputString) {
    int left = 0;
    int right = inputString.size() - 1;

    while (left < right) {
        if (inputString[left] != inputString[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main()
{
    std::string cadena; std::cin >> cadena;
    solution(cadena);
}
