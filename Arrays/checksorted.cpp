#include <iostream>
using namespace std;

bool sorted(int arr[], int n){
    int x = 0;
    int i = 1;
   for(i = 1; i < n; i++){
       
    if(arr[i] < arr[i-1]){
        return false;
    }
    
    }
return true;
}

int main(){
    int arr[5] = {1,3,6,7,7};
 if(sorted(arr,5) == 1){
    cout << "The array is sorted";

 }

 else{
    cout << "The array is unsorted";
 }
return 0;

}