#include<iostream>
using namespace std;
int digitsum(int n){
    int sum=0;
    while(n>0){
        int lastDig=n%10;
        sum=sum+lastDig;
        n=n/10;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<digitsum(num)<<endl;
    return  0;
}