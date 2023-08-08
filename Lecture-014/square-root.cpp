#include<iostream>
using namespace std;

int binarySearch(int n){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2 ;
    int ans = -1 ;

    while(s <= e){

        int square = mid*mid ;
        if (square == n) {
            return mid;
        }
        else if(square < n){
            ans = mid ;
            s = mid + 1 ;
        }
        else{
            e = mid - 1 ;
        }
        mid = s + (e-s)/2 ;

    }
    return ans ;

}
double morePrecision(int n, int precision, int tempsol) {
    
    double factor = 1;
    double ans = tempsol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main(){

    cout << "enter the number : " ;
    int n ;
    cin >> n ;
    cout << "enter the precision : " ;
    int precision ;
    cin >> precision ;

    int tempsol = binarySearch(n);
    cout << "root is " << morePrecision(n,precision,tempsol) ;

}