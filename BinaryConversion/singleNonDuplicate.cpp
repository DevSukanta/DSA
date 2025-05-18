#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int> &A)
{
    int n = A.size();
    if (n == 1)
        return A[0];

    int st = 0, end = n - 1;
    
    while (st < end) {
        int mid = st + (end - st) / 2;
        if (mid % 2 == 1) mid--; // Ensure mid is even

        if (A[mid] == A[mid + 1]) {
            st = mid + 2; // Unique is in right half
        } else {
            end = mid; // Unique is at or before mid
        }
    }
    return A[st];
}

int main()
{
    vector<int> A = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    cout << singleNonDuplicate(A) << endl;
    return 0;
}