// (1) Bruteforce approach-> O(n*m)  using nested loop approach
// (2) Row/Col wise Binary Search -> row=O(n*log m), col=O(m*log n)
// (3) Staircase Approach= O(m+n)
#include <iostream>
using namespace std;
bool search(int mat[][4],int m,int n,int key){
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(mat[i][j]==key){
            cout<<"found at ("<<i<<" ,"<<j<<") ";
            return true;
        } else if (mat[i][j]>key){
            j--;
        } else {
            i++;
        }

    }
    cout<<"key not found";
    return false;   
}
int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
    search(matrix,4,4,33);
    
    return 0;
}