#include <iostream>
#include <string>
using namespace std;
int main()
{
    // int num = 5;
    //// address of operator
    // cout<<"num : "<<num<<endl;
    // cout<<"num address : "<<&num<<endl;
    // int *ptr =&num;
    // cout<<"pointer : "<<ptr<<endl;
    // (*ptr)++;
    // cout<<"num : "<<num<<endl;
    // int *q=ptr;
    // cout<<q;
    // (*ptr)++;
    // ptr=ptr+1;
    // cout<<"pointer : "<<ptr<<endl;

    // int *ptr0 = 0;
    // int a = 10;
    // ptr0 = &a;
    // cout << *ptr0 << endl;
    // cout<<addressof(a);

    // int arr[] = {1, 2, 3, 4};
    // int *p = arr;
    // cout << p << endl;
    // cout << 3[arr] << endl;
    // cout << *(3+ arr) << endl;
    // cout<<sizeof(arr)<< endl;
    // cout<<sizeof(&arr)<< endl;
    // cout<<sizeof(&arr[0])<< endl;
    // cout<<sizeof(arr[0])<< endl;
    // cout<<sizeof(*arr)<< endl;
    // cout<<sizeof(0[arr])<< endl;
    // int *p=&arr[0];
    // cout<<sizeof(*p)<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;
    // char b[] = "xyz";
    // char *c = &b[0];
    // cout << c << endl;

    char ch='a';
    char charArray[6]="kkkkk";
    char* c=&charArray[0];
    // cout<<ch<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<&charArray<<endl;
    cout<<&charArray[0]<<endl;
    // cout<<charArray[5]<<endl;
    // cout<<sizeof(charArray)<<endl;

    return 0;
}