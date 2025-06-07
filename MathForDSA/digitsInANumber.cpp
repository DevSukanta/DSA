#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void printDigits(int n){
    while(n != 0){
        int digit = n%10;
        cout << digit << endl;
        n=n/10;
    }
}

int main()
{
    int n= 35785;
    printDigits(n);
    return 0;
}