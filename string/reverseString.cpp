#include <iostream>
#include <vector>
#include <string>
using namespace std;

void reverseString(vector<char> &s)
{
    int st = 0, end = s.size() - 1;
    while (st < end)
    {
        swap(s[st++], s[end--]);
    }
}

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    reverseString(s);

    for (char c : s)
    {
        cout << c;
    }
    cout << endl;

    return 0;
}