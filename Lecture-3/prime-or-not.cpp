#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "enter a number";
    cin >> n;
    int i = 2;

    while (i<n){
        if(n%i == 0){
            cout << "Not Prime";
            break;
        }
        else{
            cout << "prime";
            break;
        }
        i += 1;
    }
}