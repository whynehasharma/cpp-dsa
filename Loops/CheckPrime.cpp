//Check if a number is prime or not (usual method)
#include<iostream>
using namespace std;
int main(){
    int n; cout<<"enter number: "; cin>>n;
    bool isPrime=true;
    for (int i=2;i<=n-1;i++){
        if (n%i==0){
            isPrime=false;
            break;
        }
    }
    if (isPrime){
        cout<<"number is prime"<<endl;
    } else {
        cout<<"number is NOT prime"<<endl;
    }
    return 0;
}
//Check if a number is prime or not (optimised method)
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n; cout<<"enter number: "; cin>>n;
    bool isPrime=true;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            isPrime=false;
            break;
        }
    }
    if (isPrime){
        cout<<"number is prime"<<endl;
    } else {
        cout<<"number is NOT prime"<<endl;
    }
    return 0;
}