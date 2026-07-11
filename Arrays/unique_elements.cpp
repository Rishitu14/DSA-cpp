#include <iostream>
using namespace std;

int unique(int arr[], int n){
  int i = 1;
  int k = 1;
    while(i < n){
        
        if(arr[i] != arr[i-1]){       
            arr[k] = arr[i];
            k++;
        }
       i++;
       
    } 
    return k;
}

int main(){
    int arr[5] = {1,1,2,3,4};
  cout << "The number of unique elements is: " << unique(arr,5)<<endl;
  for(int i = 0 ; i<unique(arr,5); i++){
    cout << arr[i]<<", ";
  }
return 0;
}