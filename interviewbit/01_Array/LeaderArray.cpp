//
// Created by binhpht on 16.11.2020.
//

#include "LeaderArray.h"

/*Problem Description

Given an integer array A containing N distinct integers, you have to find all the leaders in the array A.

An element is leader if it is strictly greater than all the elements to its right side.

NOTE:The rightmost element is always a leader.



Problem Constraints
1 <= N <= 105

1 <= A[i] <= 108



Input Format
First and only argument is an integer array A.



Output Format
Return an integer array denoting all the leader elements of the array.

NOTE: Ordering in the output doesn't matter.



Example Input
Input 1:

A = [16, 17, 4, 3, 5, 2]
Input 2:

A = [1, 2]


Example Output
Output 1:

[17, 2, 5]
Output 2:

[2]*/

vector<int> LeaderArray::solveLeaderinArray(vector<int> &A) {
    int tmp = A.size() - 1;
    vector<int> res;
    res.push_back(A[tmp]);
    int max_n = A[tmp];


    while (tmp >= 0) {
        if (A[tmp] > max_n) {
            max_n = A[tmp];
            res.push_back(A[tmp]);

        }
        tmp--;


    }
    return res;
}