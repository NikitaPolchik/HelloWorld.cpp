#include <iostream>
#include <vector>
#include <algorithm>
#include "mainHeader.h"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::greater;

int sumOfDifferences(const vector<int> &arr)
{                                               // constant vector pointer arr
    vector<int> arrCopy(arr);                   // copying vector arr to vector arrCopy to manipulate the vector
    if (arrCopy.size() <= 1)
    { return 0; }                               // check for empty/less than 2 variables

    sort(arrCopy.begin(), arrCopy.end(), greater<int>()); // sorting arrCopy in descending order

    int accumSum = 0;                           // initializing variable
    unsigned short int lpCntr = 0;              // "unsigned short" can store only positive values, 16 bits and max number stored = 65535, it goes back to 0 if overflows or 65535 if underflows.

    for (; lpCntr < arrCopy.size() - 1; lpCntr++)  // skipping first parameter in "for" loop because it "0" by default
    {
        accumSum += arrCopy[lpCntr] - arrCopy[lpCntr + 1];
    }
    cout << "arr size: " << arrCopy.size() << endl;
    return accumSum;
}

