#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


//GCD = Greatest Common Devisor 
int gcdRec(int a, int b){
    if (b==0) return a;
    return gcdRec(b, a%b);
}

int main()
{
    cout << gcdRec( 6,12) << endl;
    return 0;
}