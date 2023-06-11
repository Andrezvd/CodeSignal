// Rename.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int solution(int year) {
    double num = static_cast<double>(year) / 100.0;
    int centuri = static_cast<int>(std::ceil(num));
    return centuri;
}


int main()
{
    int year; std::cin>> year;
    std::cout << solution(year) << std::endl;
}

