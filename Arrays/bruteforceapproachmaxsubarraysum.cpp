#include <iostream>
using namespace std;
void maxSubarraysum1(int*arr,int n ){
    int maxsum = INT_MIN;

    for(int start =0;start<n;start++){
        for(int end = start; end<n;end++) {
            int currsum =0;
            for(int i=start;i<=end;i++){
                currsum+= arr[i];
            }
            cout<<currsum<<" , ";
            maxsum = max(maxsum,currsum);
        }
        cout<<endl;
    }
    cout<<maxsum<<endl;
}// This is first brute force approach with tc O(n3)

void maxSubarraysum2(int*arr,int n ){
    int maxsum = INT_MIN;

    for(int start =0;start<n;start++){
        int currsum =0;
        for(int end = start; end<n;end++) {
            currsum += arr[end];
            maxsum = max(maxsum,currsum);
        }
        cout<<endl;
    }
    cout<<maxsum<<endl;
}// This is second brute force approach with tc O(n2)

void maxSubarraysum3(int*arr, int n) {
    int maxsum = INT_MIN;
    int currsum = 0;

    for(int i =0;i<n;i++){
        currsum+= arr[i];
        maxsum = max(currsum,maxsum);
        if(currsum<0) {
            currsum = 0;
        }
    }
    cout<<maxsum<<endl;
}// This is kadane's algorithm with tc O(n)

int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraysum1(arr,n);
    maxSubarraysum2(arr,n);
    maxSubarraysum3(arr,n);
    return 0;
}