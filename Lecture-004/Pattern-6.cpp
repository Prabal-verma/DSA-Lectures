#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    cout << "enter a number";
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j<=i){
            cout << i;
            j++ ;
        }
        i++ ;
        cout << "\n";
    }
}