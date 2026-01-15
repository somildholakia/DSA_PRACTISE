#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter how many numbers to be Entered";
    cin>>n;

    int marks[n];

    cout<<"Enter the numbers";
    for(int i =0;i<n;i++){
        cin>>marks[i];
    }

    cout<<"The numbers are: ";
    for(int i=0;i<n;i++){
        cout << marks[i];
    }

    return 0;
}