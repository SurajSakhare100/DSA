#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    vector<int> vec1;//3
    vector<int> vec2={1,2,3};//3
    vector<int> vec3(3,0);//3
    // cout<<vec1[0];
    cout<<vec2[0]<<" ";
    cout<<vec3[0]<<" ";

    cout<<endl;
    for(int i:vec2){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<char> charv={'a','b','c','d','e'};
    
    for(char i:charv){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<charv.size()<<endl;
    charv.push_back('r');
    charv.push_back('x');
    charv.push_back('z');
    charv.pop_back();
    for(char ch:charv){
        cout<<ch<<" ";
    }
    cout<<endl;

    cout<<charv.front()<<endl;
    cout<<charv.back()<<endl;
    cout<<charv.at(3);
    cout<<charv.capacity();
    charv.push_back('r');
    charv.push_back('x');
    charv.push_back('z');
    charv.push_back('r');
    charv.push_back('x');
    charv.push_back('z');
    charv.pop_back();
    cout<<charv.capacity();
    return 0;
}
