#include<iostream>
using namespace std;

 void mergearray(int arr1[], int arr2[], int n, int m, int arr3[]){
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;
    for( k ; k < n+m ; k++){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i++] ;
        }
        else if(arr1[i] > arr2[j]){
            arr3[k] = arr2[j++] ;
        }
        else if(arr1[i] = arr2[j]){
            arr3[k] = arr1[i++] ;
        }
    }

    while(i<n){
        arr3[k++] = arr1[i++] ;
    }

    while(j<m){
        arr3[k++] = arr2[j++] ;
    }
    
}
int main (){
    int n, m ;
    cout << "ENTER THE SIZE OF FIRST ARRAY : " ;
    cin >> n ;
    cout << "ENTER THE SIZE OF SECOND ARRAY : " ;
    cin >> m ;

    int arr1[n];
    int arr2[m];
    int arr3[n+m];

    int i = 0 , j = 0 , k = 0 ;

    cout << "ENTER THE ELEMENTS OF FIRST ARRAY : " ;
    while(i<n){
        cin >> arr1[i++] ;
    }
    cout << "ENTER THE ELEMENTS OF SECOND ARRAY : " ;
    while(j<m){
        cin >> arr2[j++] ;
    }
    mergearray(arr1 , arr2 , n , m ,arr3);

    cout << "THE MERGED ARRAY IS : " ;
    while(k<n+m){
        cout << arr3[k++] << "   ";
    }
}