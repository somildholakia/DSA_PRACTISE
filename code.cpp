#include <iostream>
using namespace std;


int main(){

    int arr[3][4] = {
        2,3,4,5,
        1,2,6,8,
        4,9,3,2,
    };

    int n = 3,m = 4;
    for(int i = 0;i<n;i++){

       int start = 0,end = m - 1;

       while(start < end){
        swap(arr[i][start],arr[i][end]);
        start++,end--;
       }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}