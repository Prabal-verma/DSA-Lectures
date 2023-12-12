#include<iostream>
using namespace std;

int main(){
    int n  ;
    int i = 0;
    cout << "Enter a number : ";
    cin >> n ;
    

    while(i<n){
        int j = 0 ;
        while(j<n-i-1){
            cout << " ";
            j++;
        }
        int k = 0 ;
        while(k<=i){
            cout << "*" ;
            k++ ;
        }

        i++ ;
        cout << endl ;
    }
}