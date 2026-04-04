#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> arr ={40,30,10,20};
    sort(arr.begin(),arr.end());// asscending order
    sort(arr.begin(),arr.end(), greater<int>() );// descending order

    for(int x:arr) {
        cout<<x<<" ";
    }
    return 0;

}