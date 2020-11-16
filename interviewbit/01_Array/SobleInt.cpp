//
// Created by binhpht on 16.11.2020.
//

#include "SobleInt.h"

/*Problem Description

Given an integer array A, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p.



Input Format
First and only argument is an integer array A.



Output Format
Return 1 if any such integer p is found else return -1.



Example Input
Input 1:

A = [3, 2, 1, 3]
Input 2:

A = [1, 1, 3, 3]


Example Output
Output 1:

1
Output 2:

-1*/
int sobleint::solveNobleInt(vector<int> &A) {
    int p = - 1;
    std::sort (A.begin(), A.end());
    int index = 0;
    int k = A.size() - 1;
    while (k >=0) {

        index = index + 1;
        if (A[k] == index -1) {
            p = 1;
            if (index >1 && A[k] == A[k + 1]) {
                p = -1;
            }
        }
        k--;
    }
    return p;

}