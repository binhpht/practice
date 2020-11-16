//
// Created by binhpht on 16.11.2020.
//

#include "FindPerm.h"

/*
Given a positive integer n and a string s consisting only of letters D or I,
you have to find any permutation of first n positive integer that satisfy
the given input string.
 D means the next number is smaller, while I means the next number is greater.
Notes: Length of given string s will always equal to n - 1
Your solution should run in linear time and space.
Example :
Input 1:
n = 3
s = ID
Return: [1, 3, 2]
 */
vector<int> FindPerm::findPerm(const string A, int B) {
    int maxN = B;
    int minN = 1;
    int index = 0;
    vector<int> res;
    while (index < B) {
        if (A[index] == 'D') {
            res.push_back(maxN);
            maxN = maxN - 1;
        } else if (A[index] == 'I') {
            res.push_back(minN);
            minN = minN + 1;
        }
        index = index + 1;
    }
    if (A[A.length() - 1] == 'D') {
        res.push_back(maxN);
    } else {

        res.push_back(minN);
    }

    return res;
}