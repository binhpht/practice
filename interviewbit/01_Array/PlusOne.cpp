//
// Created by binhpht on 16.11.2020.
//

#include "PlusOne.h"

/*Given a non-negative number represented as an array of digits,
 * add 1 to the number ( increment the number represented by the digits ).
The digits are stored such that the most significant digit is at the head of the list.
 Example:
If the vector has [1, 2, 3]
the returned vector should be [1, 2, 4]
as 123 + 1 = 124.
 */
vector<int> plusone::plusOne(vector<int> &A) {
    int carry = 1;
    int s = A.size();
    vector<int> result;
    vector<int> res;
    for (int index = s - 1; index >= 0; index--) {
        int sum = carry + A[index];
        carry = sum / 10;
        result.push_back(sum % 10);

    }
    result.push_back(carry);
    int k = result.size() - 1;
    while (result[k] == 0) {
        k--;
    }

    while (result[k] >= 0 && k >= 0) {
        res.push_back(result[k]);
        k--;
    }
    return res;
}