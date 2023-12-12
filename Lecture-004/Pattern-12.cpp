#include<iostream>
using namespace std;

int main(){
  
    int i = 0 ;
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;

    while(i < n){
        int j = 0 ;
        while(j<n){
            cout << char('A'+ i+j);
            j++ ;
        }
        i++ ;
        cout << endl ;
    }

}