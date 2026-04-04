#include<iostream>
using namespace std;

void print(int arr[] ,int n){
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main() {
    int arr[8] = {1,4,1,3,2,4,3,7};
    sort(arr,arr+8);// here we have to pass the beginning and ending index of arr sort(arr,arr[end]) ascending order mai sort krne kliye
    sort(arr,arr+8,greater<int>());// descending order mai sort krne kliye
    print(arr,8);
    return 0;
}