#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


//Armstrong is a number that is equal to the sum of cubes of its digits 
bool isArmstrong(int n){
    int copyN = n;
    int sumofCubes = 0;
    while(n!=0){
        int dig =n%10;
        sumofCubes += (dig * dig * dig);
        n=n/10;
    }
    return sumofCubes == copyN;
}

int main()
{
    int n= 153;
    if(isArmstrong(n)){
        cout << "Is a Armstrong" <<endl;
    }else{
        cout << "Not a Armstrong" <<endl;
    }
    return 0;
}