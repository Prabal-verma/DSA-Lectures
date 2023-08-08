#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "enter the value of n";
    cin >> a;
    int i = 1;
    int sum = 0;

    while(i <= a){
        sum += i;
        i++;
    }
    cout << sum;
}