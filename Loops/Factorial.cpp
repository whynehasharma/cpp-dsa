#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of "<< n <<" = "<<fact<<endl;
}