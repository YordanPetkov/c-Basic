#include<iostream>
using namespace std;
int main()
{
    int a[5][5],s=0,Av;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>a[i][j];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            s=s+a[i][j];
    Av=s/25;
    cout<<Av<<endl;
    return 0;
}