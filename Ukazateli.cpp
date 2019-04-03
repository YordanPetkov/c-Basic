#include<iostream>
using namespace std;
int main()
{
    int A;
    char C,CC;
    int* a;
    int* p;
    char* c;
    cin>>A>>C;
    a=&A;
    c=&C;
    cout<<A<<" "<<*a<<endl;
    cout<<C<<" "<<*c<<endl;
    cout<<&A<<" "<<a<<endl;
    cout<<&C<<" "<<c<<endl;
    CC=*c;
    cout<<CC<<endl;
    //p='0x6bff00';
    cout<<*p<<endl;
    return 0;
}
