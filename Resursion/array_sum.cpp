// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int sum(  int arr[],int n){ 
//    int sum=0;
//    for(int i=0;i<n; i++){
//        sum+=arr[i];
// }
//    return sum;
// }
// int main(){
//     int arr[]={1,2,3,4,5};    
//     int n=sizeof(arr)/sizeof(arr[0]);
// The division of the total size of the array by the size of a single element gives the number of elements in the array. 
// This is possible because the size of the entire array divided by the size of one element results in the number of elements in the array.
//  It is a common technique to calculate the length of an array in C/C++. 
//     cout<<"sum of given arry is  "<<sum(arr,n);
//     return 0;
// }

// if we want to take size and elements of arry as input by user

#include <iostream>
using namespace std;

int sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Declare an array of size 'n'

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read each element from the user
    }

    cout << "Sum of the given array is " << sum(arr, n) << endl;
    return 0;
}
