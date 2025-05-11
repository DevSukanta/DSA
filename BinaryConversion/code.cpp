#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans=0, pow=1;
    while (decNum > 0)
    {
        int rem = decNum %2;
        decNum /=2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int binToDecimal(int biNum){
    int ans=0, pow=1;
    while (biNum > 0)
    {
        int rem = biNum %10;
        biNum /=10;
        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main(){
    // int decNum =50;
    // for(int i=1; i<=10; i++){
    //     cout << decToBinary(i) << endl;
    // }
    cout << binToDecimal(101) << endl;
    return 0;
}