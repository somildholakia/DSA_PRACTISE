#include <iostream>
using namespace std;


int sum(int a, int b){

    int sum = a + b;
    return sum;

}


int main(){

    int a,b;
    cout<<"Enter the first Number\n";
    cin>>a;
    cout<<"Enter the second Number\n";
    cin>>b;

   int sumNumber = sum(a,b);

    cout<<"The sum of "<<a<<" And "<<b<<" is "<<sumNumber<<endl;
    return 0;
}