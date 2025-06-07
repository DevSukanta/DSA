#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//LCM = Lowest/least Common Multiple
int gcdRec(int a, int b){
    if (b==0) return a;
    return gcdRec(b, a%b);
}
int lcm(int a, int b){
    int gcd = gcdRec(a,b);
    return (a*b)/gcd;
}

int main()
{
    cout << lcm( 8,28) << endl;
    return 0;
}