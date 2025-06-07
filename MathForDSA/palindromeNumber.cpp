#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int reverse(int n){
    int revNum =0;
    while(n!=0){
        int dig = n%10;
        if(revNum > INT_MAX/10 || revNum <INT_MIN/10){
            return 0;
        }
        revNum = revNum * 10 + dig;
        n = n/10;
    }
    return revNum;
}
bool isPalindrome(int n){
    if(n<0) return false;
    int revNum = reverse(n);
    return n==revNum;
}

int main()
{
    cout << isPalindrome(535) << endl;
    return 0;
}