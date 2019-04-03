#include<iostream>
using namespace std;
int main()
{
    
    /// Група 1 задача 3
    /// Група 2 задача 3
    int a[101],n=0;
    cin >> n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1;j++)
            if(a[j]>a[j+1])
            {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
            
    for(int i=0;i<n;i++)
        cout<<a[i];
    
    return 0;
}