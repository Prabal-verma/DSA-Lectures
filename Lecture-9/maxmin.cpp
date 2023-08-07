#include<iostream>
#include<limits.h>

using namespace std;

int getMax(int num[],int n){

    int max = INT_MIN;

    for(int i=0 ; i<n ; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[],int n){

    int min = INT_MAX;

    for(int i=0 ; i<n ; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}


int main(){
    int n;
    cout << "enter the size of array : ";
    cin >> n;

    int num[100];
    for (int i = 0; i<n; i++){
        cin >> num[i];
    }

    int sum = getMax(num ,n);
    cout << "maximim is " << sum << endl ;
    cout << "minimum is " << getMin(num ,n);

}