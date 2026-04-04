#include<iostream>
using namespace std;

int binarysearch(int *arr , int n, int key) {
    int st=0 , end = n-1;

    while(st<=end) {
        int mid = st+(end-st)/2;
        if(arr[mid]== key) {
            return mid;
        } else if(arr[mid]<key) {
            st = mid+1;
        } else {
            end = mid-1;
        }
    }
    return -1;
}
int main () {
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/ sizeof(int);
    int key;
     cin>>key;

    cout<<binarysearch( arr, n,key)<< endl ;
    return 0;// tc of this code will be O(logn) which is better complexity than O(n)

}