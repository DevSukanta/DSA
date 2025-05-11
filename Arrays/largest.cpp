#include <iostream>
#include <climits>
using namespace std;

int main(){
   int num[]={5,17,2,1,5,-15,14,-10};
   int size = 8;
   int largest = INT_MIN;
   int largestIndex = -1;

   //loop
   for(int i=0; i<size; i++){
    if(num[i] > largest){
      largest = num[i];
      largestIndex = i;
    }
    //largest = max(num[i], largest);
    
   }

   cout << "largest = " << largest << endl;
   cout << "largest Index = " << largestIndex << endl;
   return 0;
}