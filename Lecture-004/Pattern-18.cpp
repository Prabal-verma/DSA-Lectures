#include<iostream>
using namespace std;

int main(){
    int n ;
    int i = 0;
    cout << "enter a number : ";
    cin >> n ;

    while(i<n){
        int x = 0 , y = 0 , z = 0 ;
        while(x<n-i){
            cout << 1 + x ;
            x++ ;
        }
        while(y<i){
            cout<< "**" ;
            y++ ;
        }
        while(z<n-i){
            cout << n-z-i ;
            z++ ;
        }
        i++ ;
        cout << endl ;
    }
}
