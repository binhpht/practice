//
// Created by binhpht on 16.11.2020.
//

#include "SoftArraySquare.h"

/*Problem Description

Given a sorted array A containing N integers both positive and negative.

You need to create another array containing the squares of all the elements in A and return it in non-decreasing order.

Try to this in O(N) time.


Problem Constraints
1 <= N <= 105.

-103 <= A[i] <= 103



Input Format
First and only argument is an integer array A.



Output Format
Return a integer array as described in the problem above.



Example Input
Input 1:

A = [-6, -3, -1, 2, 4, 5]
Input 2:

A = [-5, -4, -2, 0, 1]*/
vector<int> SoftArraySquare::solveSortArrayWithSquare(vector<int> &A) {
    for (int i = 0; i < A.size(); i++) {
        A[i] = A[i] * A[i];
    }
    sort(A.begin(), A.end());
    return A;
}