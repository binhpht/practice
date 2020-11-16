//
// Created by binhpht on 16.11.2020.
//

#include "PeakBothSides.h"

/*Problem Description

Given an integer array A of size N.

You can pick B elements from either left or right end of the array A to get maximum sum.

Find and return this maximum possible sum.

NOTE: Suppose B = 4 and array A contains 10 elements then:

You can pick first four elements or can pick last four elements or can pick 1 from front and 3 from back etc . you need to return the maximum possible sum of elements you can pick.


Problem Constraints
1 <= N <= 105

1 <= B <= N

-103 <= A[i] <= 103



Input Format
First argument is an integer array A.

Second argument is an integer B.



Output Format
Return an integer denoting the maximum possible sum of elements you picked.



Example Input
Input 1:

A = [5, -2, 3 , 1, 2]
B = 3
Input 2:

A = [1, 2]
B = 1*/
int PeakBothSides::solvePickBothSides(vector<int> &A, int B) {
    int sum = 0;
    int n = A.size();
    for (int i = n - 1; i > n - B - 1; i--)
        sum = sum + A[i];
    int res = sum;
    for (int i = 0; i < B; i++) {
        sum += A[i] - A[n - B + i];
        res = max(res, sum);
    }
    return res;
}