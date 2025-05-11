#include <iostream>
#include <climits>
using namespace std;

int main()
{
   int num[] = {5, 15, 2, 1, 5, -15, 14, -10};
   int size = 8;
   int smallest = INT_MAX;

   // loop
   for (int i = 0; i < size; i++)
   {
      //  if(num[i] < smallest){
      //    smallest = num[i];
      //  }
      smallest = min(num[i], smallest);
   }

   cout << "Smalles = " << smallest << endl;
   return 0;
}