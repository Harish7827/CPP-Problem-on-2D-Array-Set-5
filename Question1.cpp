// 1) Given a 2D matrix with m rows and n columns containing integers. Print and return the row number with maximum sum in the array.

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m, n;
    cout<<"Enter Row : ";
    cin >> m;
    cout<<"Enter Column : ";
    cin>> n;
    int mat[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<<"Enter "<< i << " Row and " << j << " Column : "; 
            cin >> mat[i][j];
        }
    }
    int sum = INT_MIN;
    int row = -1;
    int temp = -1;
    for (int i = 0; i < m; i++){
        for (int j = 1; j < n; j++){
            mat[i][j] = mat[i][j] + mat[i][j - 1];
        }
        if (mat[i][n - 1] > temp){
            temp = mat[i][n - 1];
            row = i;
        }
    }
    cout << "Output : " << row + 1;
    return 0;
}
