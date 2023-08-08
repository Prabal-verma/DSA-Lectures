#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter the size of array : ";
    cin >> n;
    int num [100];
    for (int i = 0;i<n ; i++){
        cin >> num[i];
    }
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + num[i];
    }
    cout << "sum is : " << sum;
}
