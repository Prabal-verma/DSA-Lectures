#include <iostream>
using namespace std;

int factorial(int n){
  // Base case
  if(n == 1){
    return 1;
  }

  // Recursive case
  else{
    return n * factorial(n-1);
  }
}
int main() {
  int n ;
  cout << "Enter a number" ; 
  cin >> n;
  cout << factorial(n);
}