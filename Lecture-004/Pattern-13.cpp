#include<iostream>
using namespace std;

int main(){
    int n ;
    int i = 0;
    cout << "Enter the number : ";
    cin >> n ;
    int count = 0 ;


    while(i<n){
        int j = 0;
        while(j<=i){
            cout << char('A'+ count);
            j++ ;
            count ++;
        }
        i++ ;
        cout << endl ;
    }
}