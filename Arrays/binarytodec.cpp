#include<iostream>
using namespace std;
int main() {
    int binnum=110;
    int ans=0,power=1;// 2^0=1
    while(binnum>0) {
        int rem=binnum%10;
        ans+=(rem*power);
        binnum/=10;
        power*=2;
    }
    cout<<ans<<endl;

    return 0;
}