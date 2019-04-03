#include<iostream>
using namespace std;
int main()
{
    int a[101],s=0;
    for(int i=0;i<101;i++)
        cin>>a[i];
    for(int i=0;i<101;i++)
        if(a[i]%23==0)s=s+a[i];
    
    cout<<s<<endl;
    return 0;
}