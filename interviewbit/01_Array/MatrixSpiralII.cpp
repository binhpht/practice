//
// Created by binhpht on 16.11.2020.
//

#include <bits/stdc++.h>
#include "FindPerm.h"
#include "Wave.h"
#include "../solution.h"
#include "MatrixSpiralII.h"

vector<vector<int> > MatrixSpiralII::generateMatrixSpiralII(int A) {

    vector<vector<int>> tmpMatrix(A, vector<int>(A, 0));
    int index = 1;
    int dir = 0;
    int t = 0, b = A - 1, left = 0, right = A - 1;
    while (index <= A*A) {
        if (dir == 0) {
            for (int i = left; i <= right; i++) {
                tmpMatrix[t][i] = index;
                index = index + 1;
            }
            t = t + 1;
            dir = 1;

        } else if (dir == 1) {
            for (int i = t; i <= b; i++) {
                tmpMatrix[i][right] = index;
                index = index + 1;
            }
            right = right - 1;
            dir = 2;
        } else if (dir == 2) {
            for (int i = right; i >= left; i--) {
                tmpMatrix[b][i] = index;
                index = index + 1;
            }
            b = b - 1;
            dir = 3;
        }
        else if (dir == 3) {
            for (int i = b; i >= t; i--) {
                tmpMatrix[i][left] = index;
                index = index + 1;
            }
            left = left + 1;
            dir = 0;
        }
        else {
            continue;
        }

    }
    return tmpMatrix;
}