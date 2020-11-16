//
// Created by binhpht on 16.11.2020.
//

#include "PerfectPeak.h"

/*    Problem Description

    Given an integer array A of size N.

    You need to check that whether there exist a element which is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it.

    If it exists return 1 else return 0.

    NOTE:

            Do not consider the corner elements i.e A[0] and A[N-1] as the answer.


    Problem Constraints
    3 <= N <= 105

    1 <= A[i] <= 109



    Input Format
    First and only argument is an integer array A containing N integers.



    Output Format
    Return 1 if there exist a element that is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it else return 0.



    Example Input
    Input 1:

    A = [5, 1, 4, 3, 6, 8, 10, 7, 9]
    Input 2:

    A = [5, 1, 4, 4]


    Example Output
    Output 1:

    1
    Output 2:

    0*/
int PerfectPeak::perfectPeak(vector<int> &A) {
    vector<int> indexMax;
    vector<int> indexMin;
    int tmpMax = INT_MIN;
    int tmpMin = INT_MAX;
    for (int i = 0 ; i < A.size(); i ++) {
        tmpMax = max(tmpMax,A[i]);
        indexMax.push_back(tmpMax);

    }

    for (int i = A.size() - 1 ; i >=0; i --) {
        tmpMin = min(tmpMin, A[i]);
        indexMin.push_back(tmpMin);
    }
    std::reverse(indexMin.begin(),indexMin.end());    // 9 8 7 6 5 4 3 2 1

    for (int i = 1 ; i <A.size() - 1 ; i ++) {
        if (A[i] > indexMax[i - 1] && A[i] < indexMin[i+1])
            return 1;
    }
    return 0;

}