#include <iostream>
using namespace std;

bool linearSearch(int mat[][3], int rows, int cols, int key){
    int rowN = 0;
    int colN = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j] == key){
                rowN = i;
                colN = j;
                cout << rowN << colN << endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows =4;
    int cols= 3;

    cout << linearSearch(matrix, rows,cols,8) << endl;
    return 0;
}