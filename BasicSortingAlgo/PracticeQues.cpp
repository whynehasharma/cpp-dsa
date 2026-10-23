//Sort the array of characters using insertion sort in descending order, char ch=['f','b','a','e','c','d']
#include<iostream>
using namespace std;
void print(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
void InsertionSort(char arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while (prev>=0 && arr[prev]<curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    print(arr,n);
}
int main(){
    char arr[6]={'f','b','a','e','c','d'};
    InsertionSort(arr,6);
    return 0;
}