#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int first=0;
    int second=1;
    cout<<first<<" "<<second<<" ";
    for (int i=2;i<n;i++){
        int third= first+second;
        cout<<third<<" ";
        first=second;
        second=third;
    }
    cout<<endl;
}