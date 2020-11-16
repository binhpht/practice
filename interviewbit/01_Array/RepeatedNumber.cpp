//
// Created by binhpht on 16.11.2020.
//

#include "RepeatedNumber.h"

int RepeatedNumber::repeatedNumber(const vector<int> &A) {
    auto B = A;
    sort(B.begin(),B.end());
    for (int i = 0 ; i < B.size(); i ++) {
        if (B[i]== B[i+1]) return B[i];
    }
    return -1;
}