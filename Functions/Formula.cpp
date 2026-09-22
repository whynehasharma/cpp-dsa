#include <iostream>
using namespace std;

// Function to calculate a^2 + b^2 + 2ab
int absquare(int a, int b) {
    return (a * a) + (b * b) + (2 * a * b);
}

int main() {
    int a, b;
    
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b; 
    
    cout << "Result: " << absquare(a, b) << endl;
    
    return 0;
}
