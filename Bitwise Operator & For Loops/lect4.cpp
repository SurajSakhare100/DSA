#include <iostream>
using namespace std;
int main()
{
    // Bit wise Operator

    // int a = 5;
    // int b = 4;
    // cout << "a & b = " << (a & b) << endl;
    // cout << "a | b = " << (a | b) << endl;
    // cout << "~ a = " << ~a << endl;
    // cout << "~ b = " << ~b << endl;
    // cout << "a ^ b = " << (a ^ b) << endl;

    // Left & Right Shift

    // cout << (19 << 1) << endl; // left shift
    // cout << (21 << 2) << endl; // left shift
    // cout << (17 >> 1) << endl; // right shift
    // cout << (17 >> 2) << endl; // right shift

    // Post Increment & Decrement
    // Pre Increment & Decrement

    // int i = 4;
    // int j = 4;
    // cout << ++i << endl;
    // cout << --i << endl;

    // cout << j + (++i) << " where i= " << i << " & j=" << j << endl;
    // cout << j + (i++) << " where i= " << i << " & j=" << j << endl;

    // int k = 9;
    // int l = 10;
    // cout << --k << endl;
    // cout << k-- << endl;

    // cout << l + (--k) << " where k= " << k << " & l=" << l << endl;
    // cout << l + (k--) << " where k= " << k << " & l=" << l << endl;

    // for loop

    // Print from 1-5

    // int n = 5;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }

    // cout << endl;

    // to write for loop in other way

    // int m = 1;
    // for (;;)
    // {
    //     if (m <= n)
    //     {
    //         cout << m << endl;
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     m++;
    // }
    // cout << endl;

    // multiple intiazation,condition ,updation allow
    // for (int q = 4,r=5,s=6; q >= 0 && r>=0 && s<=10; q--,r--,s++)
    // {
    //     cout << q <<" "<<r<<" "<< s<< endl;
    // }
    // cout << endl;

    // solve sum of for loop

    // q1.sum of 1-n;
    //  int sum =0;
    //  int z;
    //  cin>>z;
    //  for (int i = 1; i <=z; i++)
    //  {
    //      // sum=i+sum;
    //      sum+=i;
    //  }
    //  cout <<sum<<endl;

    // q2. print fibonacci series 0 1 1 2 3 5 8 13 ...

    // int w;
    // cout << "how many no. want u to print: ";
    // cin >> w;
    // int a = 0, b = 1, next;
    // cout << a << " " << b;
    // for (int i = 2; i < w; i++)
    // {
    //     next = a + b;
    //     a = b;
    //     b = next;
    //     cout << " " << next;
    // }

    // q3. is prime or not

    // int num;
    // cin>>num;
    // bool isprime =true;
    // for (int i = 2; i < num; i++)
    // {
    //     if(num%i==0){
    //         isprime=false;
    //         break;
    //     }
    // }
    // if(isprime){
    //     cout<<"is a prime";
    // }
    // else{
    //     cout<<"is not prime";
    // }

    // continue keyword

    // for (int i = 0; i < 2; i++)
    // {
    //    cout<<"hi"<<endl;
    //    cout<<"hello"<<endl;
    //    continue;
    //    cout<<"reply to kar de"<<endl;
    // }

    // some trikey for loop question

    // for (int i = 0; i <=5; i++)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // Ans : 0 2 4

    // for (int i = 0; i <=5; i--)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // Ans: Infinite loop of 0

    // for (int i = 0; i <=15; i+=2)
    // {
    //    cout<<i<<" ";
    //    if(i&1){
    //     continue;
    //    }
    //    i++;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (i + j == 10)
    //         {
    //             break;
    //         }
    //         cout << i << " " << j << endl;
    //     }
    // }


    //variable $ scoping

    // int a=10;
    // if(true){
    //     int a=10;
    // }
    // // int a=10; //not possible
    // if(1){
    //     int b=10;
    //     if(1){
    //         int b=19;
    //     if(1){
    //         cout<<b;
    //     }}
    // }

    //leetcode 1281

    // int num=234;
    // int a,product=1,sum=0;
    // while(num!=0){
    //     a=num%10;
    //     product=a*product;
    //     sum=a+sum;
    //     cout<<a<<endl;
    //     num=num/10;
    // }
    // cout<<product-sum<<endl;

    // leetcode 191
    // int a=15;
    // int count=0;
    // while(a!=0){
    //     if(a&1){
    //         count++;
    //     }
    //     a=a>>1;
    // }
    // cout<<count;
    return 0;
}
