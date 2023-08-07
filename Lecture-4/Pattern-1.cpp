#include<iostream>
using namespace std;
int main(){
    cout << "enter a number";
    int a,b;
    cin >> a;
    int i = 1;

    while(i <= a){
        int j = 1;
        while(j <= a){
            cout << "*";
            j+= 1;
        }
        cout << "\n";
        i++;
    }
}