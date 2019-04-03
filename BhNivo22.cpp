#include<iostream>
using namespace std;
int main()
{
    int a[101],p=1;
    for(int i=0;i<101;i++)
        cin>>a[i];
    for(int i=0;i<101;i++)
        if(a[i]%23==0)p=p*a[i];
    
    cout<<p<<endl;
    return 0;
}