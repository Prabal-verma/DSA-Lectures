#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    cout << "\nprinting the array \n";
    for (int i=0; i < size ;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int first [15] = {2,7};
    int second [8] ={0};
    int third [10] = {1};
    printarray(first,15);
    printarray(second,8);
    printarray(third,10);
}
