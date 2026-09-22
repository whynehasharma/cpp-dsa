//Function that accept a character(ch) as parameter and return a character that occur after ch in english alphabet 
// Eg: input:c output: d
#include<iostream>
using namespace std;
char getNextChar(char ch){
    if (ch=='z'){
        return 'a';
    } else {
        return ch+1;
    }
}
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    cout<<getNextChar(ch);
    return 0;
}