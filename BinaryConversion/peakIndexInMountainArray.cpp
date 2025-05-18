#include <iostream>
#include <vector>
using namespace std;

int peakSearchInMountainArray(vector<int> & A)
{
    int st =1, end=A.size()-2;
    while (st <= end)
    {
        int mid = st + (end -st)/2;
        if(A[mid]> A[mid-1] && A[mid] > A[mid+1]){
            return mid;
        }else if(A[mid] > A[mid-1]){//right
            st = mid+1;
        }
        else{//left
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    vector<int> A={3,4,5,6,0,1,2};
    cout << peakSearchInMountainArray(A) << endl;
    return 0;
}