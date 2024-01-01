#include<iostream>
using namespace std;
int maximum(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    return max;

}
int main(){
    int arr[6] ={67,9,8,6,10,100};
    cout<<"the largest element is:"<<maximum(arr,6)<<endl;
    return 0;

}