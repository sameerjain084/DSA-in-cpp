#include <iostream>
using namespace std;

int diagonalsum(int mat[][4], int n) {
    int sum =0;
    for(int i=0;i<n;i++) {
        sum+= mat[i][i];//pd
        if(i!=n-i-1) {
            sum+= mat[i][i];
        }
    }// this code tc=   o(n)// YE SOCH PANA MUSHKIL HAI

   /* for(int i=0;i<n;i++){// rows
        for(int j=0;j<n;j++) {//columns
            if(i==j) {
                sum+= mat[i][j];
            }else if(j==n-i-1) {
                sum+= mat[i][j];
            }
        }
    }
*/ // this method tc is O(N^2)



    cout<<"sum = "<<sum<<endl;
    return sum;
}


int main() {
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    diagonalsum(matrix,4);                    

     return 0;                   
}