//
// Created by binhpht on 16.11.2020.
//

#include "Wave.h"

//You are given an array of N integers, A1, A2 ,…, AN. Return maximum value of f(i, j) for all 1 ≤ i, j ≤ N.
//f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.
int Wave::maxArr(vector<int> &A) {
    int max1 = INT_MIN, min1 = INT_MAX;
    int max2 = INT_MIN, min2 = INT_MAX;

    for (int i = 0; i < A.size(); i++) {
        if (max1 <= (A[i] + i)) {
            max1 = A[i] + i;
        }
        if (min1 >= (A[i] + i)) {
            min1 = A[i] + i;
        }
        if (max2 <= (A[i] - i)) {
            max2 = A[i] - i;
        }
        if (min2 >= (A[i] - i)) {
            min2 = A[i] - i;
        }
    }
    return max(max1 - min1, max2 - min2);
}

/*Given an array of integers, sort the array into a wave like array and return it,
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

Example

        Given [1, 2, 3, 4]

One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]*/
vector<int> Wave::wave(vector<int> &A) {
    std::sort(A.begin(), A.end());
    vector<int> res;
    for (int i = 0 ; i < A.size() -1; i = i + 2) {
        res.push_back(A[i+1]);
        res.push_back(A[i]);
    }

    if (A.size() %2 != 0) {
        res.push_back(A[A.size() - 1]);
    }

    return res;
}