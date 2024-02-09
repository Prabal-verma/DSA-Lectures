#include<iostream>
using namespace std;
int main(){
  int r, c , r1, c1;
  cout << "ENTER THE ROW SIZE OF MATRIX : ";
  cin >> r;
  cout << "ENTER THE COLUMN SIZE OF MATRIX : ";
  cin >> c;
  
  int A[r][c];
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      cin >> A[i][j];
    }
  }
  cout << "ENTER THE ROW SIZE OF SECOND MATRIX : ";
  cin >> r1;
  cout << "ENTER THE COLUMN SIZE OF SECOND MATRIX : ";
  cin >> c1;
  int B[r1][c1];
  for(int i=0; i<r1; i++){
    for(int j=0 ; j<c1; j++){
      cin >> B[i][j];
    }
  }

  if(c !=r1){
    cout << "INVALID INPUT";
  }
  else{
    int C[r][c1];
    for(int i=0; i<r; i++){
      for(int j=0; j<c1; j++){
        C[i][j] = 0;
        for(int k=0; k<c; k++){
          C[i][j] += A[i][k] * B[k][j];
        }
      }
    }
    for(int i=0; i<r; i++){
      for(int j=0; j<c1; j++){
        cout << C[i][j] << " ";
      }
      cout << endl;
    }
  }
}