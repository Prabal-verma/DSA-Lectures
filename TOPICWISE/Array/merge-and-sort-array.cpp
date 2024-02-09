#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void sortarray(int arr3[] , int p){
    for(int i = 1 ; i < p ; i++){

        for(int j = 0 ; j < p - i ; j++){

            if(arr3[j]>arr3[j+1]){
                swap(arr3[j],arr3[j+1]) ;
            }
        }
    }
}


void mergearray(int arr1[], int arr2[], int n , int m, int arr3[]){
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;


    //adding elements of first array to the third 


    while(i<n){
        arr3[k++] = arr1[i++] ;
    }

    // adding elements of seccond array to the third 


    while(j<m){
        arr3[k++] = arr2[j++] ;
    }

}

int main(){
    int n , m ;
    int i = 0 , j = 0 ;
    int k = 0;

    cout << "ENTER THE SIZE OF FIRST ARRAY : " ; 
    cin >> n ;
    cout << "ENTER THE SIZE OF SECOND ARRAY : " ;
    cin >> m ;

    int arr1[n];
    int arr2[m];
    int arr3[n+m];

    cout << "ENTER THE ELEMENTS OF FIRST ARRAY : " ;
    while(i<n){
        cin >> arr1[i++] ;
    }
    cout << "ENTER THE ELEMENTS OF SECOND ARRAY : " ;
    while(j<m){
        cin >> arr2[j++] ;
    }
    mergearray(arr1 , arr2 , n , m , arr3) ;
    sortarray(arr3 , n+m) ;
    cout << "THE MERGED AND THE SORTED ARRAY IS : " ;
    while(k<n+m){
        cout << arr3[k++] << "   "  ;
    }

}