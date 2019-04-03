#include<iostream>
using namespace std;
int main()
{
    int a[5][5],maxi=0;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>a[i][j];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            if(a[i][j]>maxi)maxi=a[i][j];
    
    cout<<maxi<<endl;
    return 0;
}