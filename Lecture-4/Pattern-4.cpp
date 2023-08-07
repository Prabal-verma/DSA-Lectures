#include<iostream>
using namespace std;
int main(){
    int n;
    int i = 1;
    cout << "enter a number";
    cin >> n;
    int count = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << count ;
            count++ ;
            j++ ;
        }
        i++ ;
        cout << "\n";
    }
}