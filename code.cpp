#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the terms till to find the sequence: ";
    cin>>n;

    int fibo1 = 0,fibo2 = 1;
    cout<<"The fibonacci sequence till "<<n<<"is: "<<endl;
    for(int i = 0;i<n;i++){
        int ans = fibo1 + fibo2;
        cout<<ans<<" ";
        fibo1 = fibo2;
        fibo2 = ans;
    }

    return 0;
}