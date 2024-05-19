#include<iostream>
using namespace std;


// main function starts here

int main(){
  int row, col;
  cout << "Enter rows : ";
  cin >> row;
  cout << "Enter columns : ";
  cin >> col;

//  creating a 2d array

  int** arr = new int*[row];
  for(int i = 0; i<row; i++){
    arr[i] = new int[col];
  }

// taking input in 2d array 

  cout << "Enter array values\n";
  for(int i = 0 ; i<row; i++){
    for(int j = 0; j< col;j++){
      cin>> arr[i][j];
    }
  }

// printing array

  cout<<"Printing array...\n";
  for(int i = 0; i<row;i++){
    for(int j = 0; j<col;j++){
      cout<<arr[i][j] << " ";
    }
    cout<< "\n";
  }

// releasing memory

  for(int i = 0;i<row;i++){
    delete [] arr[i];
  }
  delete [] arr;
  cout << "Deleted heap memory...";

}