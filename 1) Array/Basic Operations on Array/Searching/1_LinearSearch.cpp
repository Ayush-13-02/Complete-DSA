// In Linear Search: We compare the target element to every element if target and the element is finded equal then give the answer according to the Qustions.

// Implementations:
#include <iostream>
using namespace std;
int main(){
    int n=10; //Size of array
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    int target=15; //We find 5 is prsent in array or not
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"Element found at index "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Element is not Found"<<endl;
    return 0;
}

// When to use Linear Search?
//     When we are dealing with a small dataset.
//     When you are searching for a dataset stored in contiguous memory.