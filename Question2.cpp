// Q2) Given a matrix arr[][] of integers, print the prefix sum matrix for it.

#include <iostream>
using namespace std;
int main(){
    int r;
    int c;
    cout<<"Enter the row size : ";
    cin>>r;

    cout<<"Enter the column size : ";
    cin>>c;
    
    int arr[r][c];
    cout<<"Enter the matrix elements : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter " << i + 1 << " Row and "<< j + 1 << " Column Value : ";
            cin>>arr[i][j];
        }
    }
    int temp[r][c];
    temp[0][0]=arr[0][0];
    for(int i=1;i<r;i++){
        temp[i][0]=temp[i-1][0]+arr[i][0];
    }
    for(int j=1;j<c;j++){
        temp[0][j]=temp[0][j-1]+arr[0][j];
    }
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            temp[i][j]=temp[i-1][j]+temp[i][j-1]-temp[i-1][j-1]+arr[i][j];
        }
    }
    //printing the prefix sum matrix
    cout<<"The prefix matrix is : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}