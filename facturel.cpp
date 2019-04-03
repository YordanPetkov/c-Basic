#include<iostream>
#include<string>
#include <stdio.h>
using namespace std;

int main()
{
    char a,b;
    cin>>a;
    cin>>b;
    int n=a;
    int m=b;
    cout<<a-b<<endl;
    cout<<n<<endl;
    cout<<m<<endl;
    a=a-32;
    cout<<a<<endl;
    a=a+32;
    cout<<a<<endl;
    if(isupper(b))cout<<b<<endl;
}