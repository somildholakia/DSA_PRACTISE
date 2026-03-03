#include <iostream>
using namespace std;

int main(){

    int num = 1;
    for(int row = 1;row <= 5;row++){
        for(int col = 1;col <= 5; col++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}