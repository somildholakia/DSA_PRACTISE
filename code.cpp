#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number to be Checked: ";
    cin>>n;

    int original = n;
    int count = 0;
    while(n){
        count++;
        n /= 10;
    }

    int temp = original;
    int ans = 0,rem;
    while(temp){
        rem = temp % 10;
        temp /= 10;
        int power = 1;
        for(int i = 0;i<count;i++){
            power *= rem;
        }
        ans = power + ans;
    }

    if(ans = original){
        cout<<"Its an armstrong number";
    } else {
        cout<<"Not an armstrong number";
    }

    return 0;
}