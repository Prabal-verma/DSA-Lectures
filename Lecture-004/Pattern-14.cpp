#include<iostream>
using namespace std;

int main(){
    int n ;
    int i = 0 ;
    cout << "enter a number";
    cin >> n ;

    while(i<n){
        int j = 0;
        while(j<=i){
            cout << char('A'+n-i+j-1);
            j++ ;

        }
        i++ ;
        cout << endl;
    }
}