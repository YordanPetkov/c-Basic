#include<iostream>
using namespace std;
static int x = 100;
void increment(int x){
    x++;
}
int main(){
    increment(x);
    cout<<x<<endl;
    return 0;
}
