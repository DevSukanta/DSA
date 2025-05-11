#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {5, 17, 2, 1, 5, -15, 14, -10};
  int size = 8;
  int target = 14;

  cout << linearSearch(arr, size, target) << endl;
  return 0;
}