// MaxProductArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int solution(std::vector<int> inputArray) {
    int largetsProduct = -999999999;
    for (int i = 0; i < inputArray.size() - 1; i++) {
        int actualProduct = inputArray[i] * inputArray[i + 1];
        if (actualProduct > largetsProduct) {
            largetsProduct = actualProduct;
        }
    }
    return largetsProduct;
}

int main()
{
    std::cout << "Hello World!\n";
}
