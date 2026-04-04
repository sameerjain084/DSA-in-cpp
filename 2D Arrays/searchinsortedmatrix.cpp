#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key) {// same thing
    int i =0,j=m-1;

    while(i<n && j>=0) {
        if(mat[i][j]==key) {
            cout<<i<<" , "<<j<<endl;
            return true;
        }else if(mat[i][j]>key) {
            j--;
        }else{
            i++;
        }
    }
    cout<<"key not found"<<endl;
    return false;
}// this is staircase approach with tc o(n+m)

int searchmatrix(int (*mat)[4], int n , int key) {// this thing and upper thing is same both are pointing same thing
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(mat[i][j]==key){
               cout<<i<<" , "<<j<<endl;
            }
        }
    }
    return -1;
}  // this is brute force approach with tc o(n^2)

int main() {
    int key =33;
    int matrix[4][4] ={{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,29,50}};

    searchmatrix(matrix,4,key);
    search(matrix ,4,4,key);
    return 0;                    
}