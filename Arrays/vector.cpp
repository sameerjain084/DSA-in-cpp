#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vec = {'a','b','c','d','e'};
    for(char val: vec) {
        cout<<val<<endl;
    }
    return 0;
} 
// vec.size() is for size
// vec.push_back()  is for adding element
// vec.pop_back()  is for removing element
// vec.front()  1 element   vec.back() last element
//vec.at(1) accesing the element 
