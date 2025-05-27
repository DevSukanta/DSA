#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    string ans = "";
    
    // Step 1: Reverse the entire string
    reverse(s.begin(), s.end());

    int i = 0;
    while (i < n) {
        // Skip leading spaces
        while (i < n && s[i] == ' ') i++;

        // Build the word
        string word = "";
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        // Reverse the word to get original order
        reverse(word.begin(), word.end());

        // Add the word to result
        if (!word.empty()) {
            if (!ans.empty()) ans += " ";
            ans += word;
        }
    }

    return ans;
}

int main()
{
    string s1 = "the sky is blue";
    
    cout << reverseWords(s1) <<endl;

    return 0;
}