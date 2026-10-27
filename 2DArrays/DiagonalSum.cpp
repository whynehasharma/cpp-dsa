#include <iostream>
using namespace std;
int DiagonalSum(int matrix[][4],int n, int m){
    int sum=0;
    //O(n^2)
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //             if(i==j){
    //                 sum+=matrix[i][j];
    //             } else if (j==n-i-1) {
    //                 sum+=matrix[i][j];
    //             }
    //     }
    // }

    //O(N) Time Complexity
    for(int i=0;i<n;i++){
        sum+=matrix[i][i];
        if(i!=n-i-1){
            sum+=matrix[i][n-i-1];
        }
    }
    cout<<"sum="<<sum<<endl;
    return sum;
}
int main(){
int matrix[4][4]={ {1,2,3},
                    {4,5,6},
                    {7,8,9}};
    DiagonalSum(matrix,3,3);
    
    return 0;
}