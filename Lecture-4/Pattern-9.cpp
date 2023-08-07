#include<iostream>
using namespace std;
int main(){
    int n ;
    int i = 0;
    cout << "enter the number : ";
    cin >> n;
    while (i<n){
        int j = 0;
        while (j<n){
            cout << char('A'+i);
            j++ ;
        }
        i++;
        cout << endl ;
    }
}