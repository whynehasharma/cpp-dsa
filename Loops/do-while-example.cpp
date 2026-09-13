//Program where user keep entering numbers till they enter a multiple of 10. (using do while loop)
#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"Enter a number:";
        cin>>n;
        if (n%10==0){
            break;
        }
        cout<<"you entered : "<<n<<endl;
    } while (true);
    return 0;
}