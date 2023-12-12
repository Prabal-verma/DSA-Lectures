#include<iostream>
using namespace std;

int main(){
    int n ;
    int i = 0;
    cout << " Enter a number : ";
    cin >> n ;


    while (i<n){
        int j = 0 ,k = 0 , l = 0;
        while(j<n-i-1){
            cout << " " ;
            j++ ;

        }
        while(k<=i){
            cout << k+1 ;
            k++ ;
        }
        i++;
        while(l<i-1){
            cout << i-l-1;
            l++ ;
        }
        cout << endl ;

    }
}