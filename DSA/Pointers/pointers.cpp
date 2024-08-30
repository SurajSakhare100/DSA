#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num = 5;

    // address of operator
    cout<<"num : "<<num<<endl;
    cout<<"num address : "<<&num<<endl;
    int *ptr =&num;
    cout<<"pointer : "<<ptr<<endl;
    (*ptr)++;
    cout<<"num : "<<num<<endl;
    int *q=ptr;
    cout<<q;
    (*ptr)++;
    ptr=ptr+1;
    cout<<"pointer : "<<ptr<<endl;

    int *ptr0 = 0;
    int a = 10;
    ptr0 = &a;
    cout << *ptr0 << endl;
    cout<<addressof(a);

    int arr[] = {1, 2, 3, 4};
    // int *p = arr;
    // cout << p << endl;
    cout << 3[arr] << endl;
    cout << *(3+ arr) << endl;

    // char b[] = "xyz";
    // char *c = &b[0];
    // cout << c << endl;

    return 0;
}