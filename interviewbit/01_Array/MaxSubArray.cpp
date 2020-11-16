//
// Created by binhpht on 16.11.2020.
//

#include "MaxSubArray.h"

int MaxSubArray::maxSubArray(const vector<int> &A) {
    int tmp = A[0];
    int result = A[0];
    for (int i = 1; i < A.size(); i++) {
        tmp = max(A[i], tmp + A[i]);
        result = max(tmp, result);
    }
    return result;

}