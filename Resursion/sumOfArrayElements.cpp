#include<iostream>
using namespace std;
int getSum(int *arr,int size){
    // base condition
    if(size==0){
        return 0;
    }
    int remainingPart=getSum(arr+1,size-1);
    int sum=arr[0]+remainingPart;
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int sum=getSum(arr,size);
    cout<<"Sum is : "<<sum;
    return 0;
}