#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    int oddsum = 0;
    while (i <= n)
    {
        
        if (i % 2 == 0)
        {
            oddsum += i;
        }
        
    i++;
    }
    cout << oddsum << endl;

    return 0;
}