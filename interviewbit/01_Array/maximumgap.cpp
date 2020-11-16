//
// Created by binhpht on 16.11.2020.
//

#include <bits/stdc++.h>
#include "SobleInt.h"
#include "PlusOne.h"
#include "../solution.h"
#include "maximumgap.h"

/*Problem Description

Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].



Input Format
First and only argument is an integer array A.



Output Format
Return an integer denoting the maximum value of j - i;



Example Input
Input 1:

A = [3, 5, 4, 2]


Example Output
Output 1:

2*/
int maximumgap::maximumGap(const vector<int> &A) {
    vector<pair<int,int>> vIndex;
    for (int i = 0; i <A.size(); i ++) {
        vIndex.push_back(make_pair(A[i],i));
    }
    sort(vIndex.begin(),vIndex.end());
    int maxIndex = INT_MIN;
    auto C = A;

    for (int i = A.size() - 1 ; i >=0 ; i-- ) {
        maxIndex = max(maxIndex, vIndex[i].second);
        C[i] = maxIndex;
    }

    int res = INT_MIN;

    for (int i = 0; i < A.size(); i ++) {
        res = max(res, C[i] - vIndex[i].second);
    }

    return res;
}