//
// Created by binhpht on 16.11.2020.
//

#include "MaxMin.h"

/*Problem Description

Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

NOTE: You should make minimum number of comparisons.

Problem Constraints
1 <= N <= 105

-109 <= A[i] <= 109

Input Format
First and only argument is an integer array A of size N.

Output Format
Return an integer denoting the sum Maximum and Minimum element in the given array.


Example Input
Input 1:

A = [-2, 1, -4, 5, 3]
Input 2:

A = [1, 3, 4, 1]


Example Output
Output 1:

1
Output 2:

5*/
int MaxMin::solveMaxMin(vector<int> &A) {
    int max = A[0];
    int min = A[0];
    for (int i = 0; i < A.size(); i++) {
        if (A[i] >= max) {
            max = A[i];
        }
        if (A[i] <= min) {
            min = A[i];
        }

    }
    return max + min;
}