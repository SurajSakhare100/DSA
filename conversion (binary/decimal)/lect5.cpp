#include <iostream>
#include <math.h>
using namespace std;
int reverse(int n){
int ans = 0;
    while (n != 0)
    {
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
           return 0;
        }
        int digit = n % 10;
        n = n / 10;
        ans = (ans * 10) + digit;
    }
    return ans;
}
bool ispowerof2(int num){
    int i=-31;
    while(i!=31){
    if(num==pow(2,i)){
        return 1;
    }
    i++;
    }
    return 0;

}
int main()
{
    // int num = 5, i = 0, ans = 0;
    // while (num != 0)
    // {

    //     if (num < 0)
    //     {
    //         int bit = num & 1;
    //         ans = bit * pow(10, i) + ans;
    //         num = num >> 1;
    //         i++;
    //     }
    //     else{
    //         int bit = num & 1;
    //         ans = bit * pow(10, i) + ans;
    //         num = num >> 1;
    //         i++;
    //     }
    // }
    // int h=1011,j=0,decimal=0;
    // while (h!=0)
    // {
    // int b=h%10;
    // h=h/10;
    // decimal=(b*pow(2,j)+decimal);
    // j++;
    // }
    // cout<<decimal;
    // cout << ans;

    // int n;
    // cin >> n;
    // cout<<reverse(n);

    //leetcode 1009

    // int n=5,count=0,b=0,mask,m=5;
    // while(n!=0){
    //     n=n>>1;
    //     count++;
    // }
    // cout<<count<<endl;
    // while(count!=0){
    //     mask=b|1;
    //     b=mask<<1;
    //     count--;
    // }
    // cout<<((~m)&mask);

    //leetcode 231

    int num;
    cin>>num;
    cout<<ispowerof2(num);
    return 0;
}