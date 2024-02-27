#include <iostream>
using namespace std;


int fibo(int a){
  if(a==1){
    
    return 0;
  }
  if(a==2){
    
    return 1;
  }

  int ans = fibo(a-1) + fibo(a-2) ;
  return ans;
}
int main() {
  int a ;
  cout << " enter the digit till which you want to print fibonacci";

  cin >> a;

  // cout << fibo(a);
  for(int i = 1 ; i <= a;i++){
    cout << fibo(i) << "  ";
  }
}