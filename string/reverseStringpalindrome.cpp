#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string reverstring(string str1){
    reverse(str1.begin(), str1.end());
    return str1;
}
 bool isPalindrome(string str, string str1){
    if(str == str1){
        return true;
    }else{
        return false;
    }
 }
int main()
{
    string str = "madam";
    string str1 = reverstring(str);
    
    cout << isPalindrome(str, str1) <<endl;

    return 0;
}