// SecuenciaEnVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool solution2(std::vector<int> a) {
    int n = a.size(), p = -1, c = 0;
    for (int i = 1; i < n; i++) if (a[i - 1] >= a[i]) p = i, c++;
    if (c > 1) return 0;
    if (c == 0) return 1;
    if (p == n - 1 || p == 1) return 1;
    if (a[p - 1] < a[p + 1]) return 1;
    if (a[p - 2] < a[p]) return 1;
    return 0;
}

bool almostIncreasingSequence(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    int prev = nums[0];
    int prevPrev = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] <= prev) {
            count++;
            if (count > 1)
                return false;

            if (nums[i] > prevPrev)
                prev = nums[i];
        }
        else {
            prevPrev = prev;
            prev = nums[i];
        }
    }

    return true;
}

bool solution(vector<int>& sequence) {
    int count = 0;
    int n = sequence.size();

    for (int i = 1; i < n; i++) {
        if (sequence[i] <= sequence[i - 1]) {
            count++;
            if (count > 1)
                return false;
            if (i > 1 && sequence[i] <= sequence[i - 2])
                sequence[i] = sequence[i - 1];
        }
    }

    return true;
}

int main() {
    vector<int> v;

    for (int i = 0; i < v.size(); i++)
    {
        int x;  cin >> x;
        v.push_back(x);
    }
    
    solution(v);
}