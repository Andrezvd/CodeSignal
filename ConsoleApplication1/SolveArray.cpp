// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

int solveArray(std::vector<int>& v) {
    std::sort(v.begin(), v.end());
	int count = 0;
	for (int i = 0; i < v.size()-1; i++)
	{
		if ((v[i]+1) != v[i+1]) {
			count += v[i+1] - (v[i]+1);
		}
	}
	return count;
}

int main()
{
	std::vector<int> v;

	for (int i = 0; i < 4; i++)
	{
		int x; std::cin >> x;
		v.push_back(x);
	}

	std::cout << solveArray(v);
}

