#include <iostream>
#include <climits>
using namespace std;

int sec_largest(int arr[], int n){
    int l = INT_MIN;
    int sl = INT_MIN;


    for( int i = 0; i < n; i++){
        if(arr[i] > l){
            sl = l;
            l = arr[i];
            
        }
        else if(arr[i]<l && arr[i] > sl){
            sl = arr[i];
        }
      

    
}

if(l == sl || sl == INT_MIN){
    return -1;
}
else{
    return sl;
}
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

cout << "The largest element in your array is: "<< sec_largest(arr,n)<< endl;

return 0;
}



