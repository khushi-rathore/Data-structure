#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int arr[],int s,int e,int k){
    print(arr,s,e);
    // base case
    if(s>e){
        return false;
    }
    int mid =s+(e-s)/2;
    cout<<"Your mid value is : "<<arr[mid]<<endl;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarySearch( arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[6]={2,4,6,8,9,10};
    int size=6;
    int key=9;
    cout<<"Present or not  "<<binarySearch(arr,0,5,key);
    return 0;
}