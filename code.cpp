#include <iostream>
using namespace std;

int main(){

    int arr[1000];
    int n;
    cout<<"Enter how many numbers to be Inserted: ";
    cin>>n;

    cout<<"Enter the numbers: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\nOriginal Array: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i = 0;i<n-1;i++){
        int minIndex = i;
        for(int j = i + 1;j<n;j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

    cout<<"\nSorted Array: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int key;
    cout<<"\nEnter the element to be found: ";
    cin>>key;

    int start = 0,index = -1;
    int end = n -1;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            index = mid;
            break;
        } else if(arr[mid] < key){
            start = mid + 1;
        } else {
            end = mid -1;
        }
    }

    if(index >= 0){

    cout<<"Element found at index: "<<index;
    } else {
        cout<<"Element not present";
    }
    return 0;
}