#include <iostream>
using namespace std;
int main() {
    int decnum =6;
    int ans =0, power =1;// 10^0=1
    while(decnum>0) {
        int rem = decnum%2;
        decnum/=2;
        ans+=(rem*power);
        power*=10;
    }
    cout<<ans<<endl;
    return 0;


}