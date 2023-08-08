#include<iostream>
using namespace std;


void swapalternate(int arr[],int n){
    int start = 0;
    int end = n-1;

    for(int i = 0; i<n ; i=i+2){
        if (i+1< n){
            swap(arr[i],arr[i+1]);
        }
    }


}

void printarray(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
}

int main(){

    int arr[6]={2,5,9,7,-6,4};
    int brr[5]={3,4,9,-5,6};

    swapalternate(arr,6);
    swapalternate(brr,5);

    printarray(arr,6);
    printarray(brr,5);
}