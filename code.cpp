#include <iostream>
using namespace std;

int main(){
    int n,m;
    string element = "";
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of elements per row: ";
    cin>>m;
    cout<<"Which element to be entered: ";
    cin>>element;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cout<<element<<" ";
        }
        cout<<endl;
    }

    return 0;
}