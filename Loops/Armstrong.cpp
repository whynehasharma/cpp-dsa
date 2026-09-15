#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int num=n;
    int cubsum=0;
    while (num>0){
        int lastDig=num%10;
        cubsum=cubsum+lastDig*lastDig*lastDig;
        num=num/10;
    }
    if (n==cubsum){
        cout<<"armstrong";
    } else {
        cout<<"NOT armstrong";
    }
}