#include <iostream>
using namespace std;

int largest(int arr[], int n){
    int x = arr[0];
    for(int i = 0; i < n; i++){
        if (arr[i] > x){
            x = arr[i];
        }
    }
    
    return x;
}

int main(){
 int n;
 cout << "Enter number of elements"<<endl;
 cin >> n;

 int arr[n];
 
 for (int i=0; i < n; i++){
    cout << "Enter element"<<endl;
    cin >> arr[i];
 }

cout << "The largest element in your array is: "<< largest(arr,n)<< endl;

return 0;
}