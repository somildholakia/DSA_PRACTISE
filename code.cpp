#include <iostream>
using namespace std;

int main(){

    for(int row = 4;row>=1;row--){
        char name = 'A';
        for(int col = 1;col<=row;col++){
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
    }

    return 0;
}