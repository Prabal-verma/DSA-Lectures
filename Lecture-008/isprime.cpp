#include<iostream>
using namespace std ;


int isprime(int a){
    int count = 0 ; 
    for(int i = 2 ; i<a ; i++){
        if(a%i==0){
            count++ ;
        }

    }
    if(count){
        cout << "Not Prime" ;

    }
    else{
        cout << "Prime \n" ;
    }
}


int main(){
    int a ;
    cin >> a ;
    isprime(a) ;

}