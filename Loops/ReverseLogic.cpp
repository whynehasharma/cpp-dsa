//Print Reverse of a number (Logic)
#include<iostream>
using namespace std;
int main(){
    int n=10829;
    while (n>0){
        int lastDig=n%10;
        cout<<lastDig<<" ";
        n=n/10;
    }
    cout<<endl;
    return 0;
}
///Reverse a given number and print the result
#include<iostream>
using namespace std;
int main(){
    int n=10829;
    int res=0;
    while (n>0){
        int lastDig=n%10;
        res=res*10+lastDig;
        n=n/10;
    }
    cout<<"reverse="<<res<<endl;
    return 0;
}