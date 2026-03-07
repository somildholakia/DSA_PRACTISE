#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number to be Converted: ";
    cin>>num;
    int rem,mul = 1,ans = 0;

    while(num){
        rem = num % 2;
        num /= 2;
        ans = rem*mul + ans;
        mul *= 10;
    }

    cout<<"The conversion is: "<<ans<<endl;


    return 0;
}