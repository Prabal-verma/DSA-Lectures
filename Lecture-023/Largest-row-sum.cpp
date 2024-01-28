#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestrowsum(int arr[][3] , int row , int col){
    int maxi = INT_MIN ;
    int rowindex = -1 ;

    for(int row = 0 ;row < 3 ; row++){
        int sum = 0 ;
        for(int col = 0 ; col < 3 ; col++){
            sum += arr[row][col] ;
        }
        if(sum > maxi){
            maxi = sum ;
            rowindex = row ;
        }
    }
    cout << "The maximum sum is : " << maxi <<endl ;
    return rowindex ;
}

int main(){
    int arr[3][3] ;
    cout << "Enter the elements of array : " ;
    

    //* taking the input of the array 

    for(int r = 0 ; r<3 ; r++){
        for(int c = 0 ; c<3 ; c++){
            cin >> arr[r][c] ;
        }
    }
    cout << "The largest row sum is : " << largestrowsum(arr ,3,3) ;
}