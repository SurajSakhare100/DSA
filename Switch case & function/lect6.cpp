#include <iostream>
using namespace std;
int power(int a, int b)
{
    int temp = 1;
    for (int i = 1; i < b + 1; i++)
    {
        temp = a * temp;
    }
    return temp;
}
bool iseven(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int fact(int n)
{
    // cout<<n;
    int fact = 1;
    for (int i = 1; i < n + 1; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int z = fact(n) / (fact(r) * fact(n - r));
    return z;
}
bool isprime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void fibo(int n)
{
    int a = 0;
    int b = 1;
    int temp;
    if (n == 0)
    {
        cout << "invalid";
    }
    else if (n == 1)
    {
        cout << 0 << " ";
    }
    else if (n <= 2)
    {
        cout << "0 1";
    }
    else
    {
        cout << a << " " << b << " ";
        for (int i = 2; i < n; i++)
        {
            temp = a + b;
            cout << temp << " ";
            a = b;
            b = temp;
        }
    }
}
int countbit(int a,int b){
    int counta=0,countb=0;
    while(a!=0 &&b!=0){
        int bit=a&1;
        int bitb=b&1;
        a=a>>1;
        b=b>>1;
       if(bit==1){
        counta++;
       }
       if(bitb==1)
       {
        countb++;
       }
    }
    
    return counta+countb;
}
int main()
{

    // power of number

    // int a;
    // int b;
    // cout<<"num : ";
    // cin>>a;
    // cout<<"power : ";
    // cin>>b;
    // cout<<"your ans: "<<power(a,b);

    // is even num

    // int num;
    // cout<<"enter your num : ";
    // cin>>num;
    // if(iseven(num)){
    //     cout<<"num is even";
    // }
    // else{
    //     cout<<"num is odd";
    // }

    // ncr == n!/r!*(n-r)!

    // int n,r;
    // cout<<"enter n : ";
    // cin>>n;
    // cout<<"enter r : ";
    // cin>>r;
    // cout<<"your ncr value : "<<ncr(n,r);

    // is it prime...

    //     int n;
    //     cout<<"enter num : ";
    //     cin>>n;
    //     if(isprime(n)){
    //         cout<<"num is prime";
    //     }
    //     else{
    // cout<<"num is not prime";
    //     }

    // fibonachi series 0,1,1,2,3,5,8,13.... print upto nth term
    // int n;
    // cout<<"enter nth term : ";
    // cin>>n;
    // fibo(n);

    // switch case
    // int num = 1;
    // switch (num)
    // {
    // case 1:
    //     cout << "hello1" << endl;
    //     break;
    // case 2:
    //     cout << "hello2" << endl;
    //     break;
    // default:
    //     cout << "hello" << endl;
    //     break;
    // }

    // int RS = 890;
    // int a, b, c, d, num = 100;

    // switch (num)
    // {
    // case 100:
    //     a = RS / 100;
    //     RS = RS % 100;
    //     num = 50;
    // case 50:
    //     b = RS / 50;
    //     RS = RS % 50;
    //     num = 20;
    // case 20:
    //     c = RS / 20;
    //     RS = RS % 20;
    //     num = 1;
    // case 1:
    //     d = RS / 1;
    //     RS = RS % 1;
    //     num = 0;
    // }
    // cout << "100:" << a << endl;
    // cout << "50:" << b << endl;
    // cout << "20:" << c << endl;
    // cout << "1:" << d << endl;
    cout<<countbit(13,15);
    return 0;
}