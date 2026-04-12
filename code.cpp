#include <iostream> 
using namespace std;

int main(){

    int arr[8] = {3,4,-2,5,8,20,-10,8};
    int n = 8;

    int isEqual = false;
    int totalSum = 0;
    for(int i = 0;i<n;i++){
        totalSum += arr[i];
    }

    int prefixSum = 0;
    for(int i = 0;i<n-1;i++){
        prefixSum += arr[i];

       int suffix = totalSum - prefixSum;
        if(prefixSum == suffix){
            isEqual = true;
            break;
        }
    }
    if(!isEqual){
        cout<<"Sum is not equal";
    } else {
        cout<<"Sum is equal";
    }

    return 0;
}