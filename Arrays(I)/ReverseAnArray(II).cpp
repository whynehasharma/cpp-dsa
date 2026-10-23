//Reverse an array without extra space
//2 pointer approach
#include<iostream>
using namespace std;
void printArr(int *arr, int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    int start=0,end=n-1;
    while (start<=end){
        swap(start,end);
        start++;
        end--;
    }
    printArr(arr,n);
    return 0;
}