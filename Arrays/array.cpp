#include <iostream>
using namespace std;
int main() {
    int nums[] = {5,15,22,1,-15,24};
    int size = 6;

    int smallest = INT_MAX;
    int minIndex= 0;
    int largest = INT_MIN;
    int MaxIndex = 0;

    for(int i=0;i<size;i++) {
        if(nums[i]<smallest) {
            smallest= nums[i];
            minIndex = i;
        }
        largest= max(nums[i],largest);
        MaxIndex=i;
       

    }
    cout<<"smallest number is "<<smallest<<endl;
    cout<<"smallest index "<<minIndex<<endl;
     cout<<"largest number is "<<largest<<endl;
    cout<<"largest index "<<MaxIndex<<endl;
    
}