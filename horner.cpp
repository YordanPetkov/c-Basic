#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    int DEL = a[n-1] / a[0],Cur[n];

    DEL = abs(DEL);
    for(int i = 1; i <= DEL; i++){

        if(DEL % i == 0){
            Cur[0] = a[0];
            for(int j = 1; j < n; j++){
                Cur[j] = Cur[j-1] * i + a[j];
            }
            if(Cur[n-1] == 0){cout<<i<<endl;
            for(int j=0;j<n;j++)cout<<Cur[j]<<" ";
            cout<<endl;
            }
            Cur[0] = a[0];
            for(int j = 1; j < n; j++){
                Cur [j]= Cur[j-1] * i * (-1) + a[j];
            }
            if(Cur[n-1] == 0){cout<<i*(-1)<<endl;for(int j=0;j<n;j++)cout<<Cur[j]<<" ";
            cout<<endl;}
        }
    }
    return 0;
}
