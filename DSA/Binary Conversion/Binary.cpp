#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int ans=0,pow=1,rem=0;
    while (n > 0) {
        rem=n%2;
        ans+=rem*pow;
        pow*=10;
        n = n / 2;
    }

    return ans;
}
int binaryToDecimal(int n){
    int ans=0,pow=1,rem=0;
    while (n > 0) {
        rem=n%10;
        ans+=rem*pow;
        pow*=2;
        n = n / 10;
    }

    return ans;
}
int main() {
    int n=10;
    // for(int i=1;i<=n;i++)
    //     cout<<decimalToBinary(i)<<endl;
    // cout<<binaryToDecimal(11);

    // int num=8;
    // int num2=12;
    // cout<<~num<<endl;
    // cout<<(num & num2)<<endl;
    // cout<<(num | num2)<<endl;
    // cout<<(num ^ num2)<<endl;

    // cout<<(num<<2)<<endl;
    // cout<<(num>>1)<<endl;

    int x=128;
    if(x > 0 && (x & (x - 1)) == 0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
