#include <iostream>
using namespace std;

void dleft(int arr[], int n, int d){
    d = d % n;
    int darr[d];
    int j=0;

    for(int i = 0; i < d; i++){
        darr[i] = arr[i];
    }

    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }

    for(int i = n-d; i<n; i++){
        
        arr[i] = darr[j];
        j++;
    }
   
}

int main(){
    int arr[5] = {1,2,3,4,5};
    dleft(arr,5,8);
    for(int i = 0 ; i<5; i++){
        cout << arr[i]<<", ";
    }
        return 0;
}