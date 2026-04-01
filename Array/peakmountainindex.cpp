#include <iostream>
using namespace std;
bool search(int arr[],int n) {
    for(int i=0;i<n;i++) {
        if(arr[i-1]<arr[i]&& arr[i]>arr[i+1]) {
            return true;
        }
    }
    return false;
}
int main() {
    int arr[6]={0,3,8,9,5,2};
    int n =6;

    cout<<search(arr,n)<<endl;
    return 0;
}
