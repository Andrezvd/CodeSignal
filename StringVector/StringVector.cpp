// StringVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


std::vector<std::string> solution1(std::vector<std::string> inputArray) {
    std::vector<std::string> ret;

    for (auto& s : inputArray) {
        if (ret.empty() || s.size() == ret[0].size())
            ret.push_back(s);
        else if (s.size() > ret[0].size())
            ret = std::vector<std::string>{ s };
    }

    return ret;
}

std::vector<std::string> r, solution2(std::vector<std::string>& a) {
    int b = 0;
    for (auto& s : a) if (s.size() > b) b = s.size();
    for (auto& s : a) if (s.size() == b) r.push_back(s);
    return r;
}

std::vector<std::string> solution(std::vector<std::string> inputArray) {
    std::vector<std::string> result;
    int actual = 0;
    if (inputArray.size() == 1) {
        return inputArray;
    }
    else {
        for (int i = 0; i < inputArray.size() - 1; ++i) {
            if (inputArray[i].size() >= inputArray[i + 1].size() && inputArray[i].size() >= actual) {

                actual = inputArray[i].size();
            }
            else if(inputArray[i].size()>=actual) {
                actual = inputArray[i + 1].size();
            }
        }

        for (int i = 0; i < inputArray.size(); ++i) {
            if (inputArray[i].size() == actual) {
                result.push_back(inputArray[i]);
            }
        }
    }
    return result;
}


int main()
{
    std::vector<std::string> v 
        {"abacaba",
        "abacab",
        "abac",
        "xxxxxx"};
    solution(v);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
