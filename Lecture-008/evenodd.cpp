#include<iostream>
using namespace std ;


void evenodd(int a){
    if(a%2 == 0){
        cout << "Number is even" ;
    }
    else{
        cout << "Number is odd" ;
    }
}

int main(){

    int a ;
    cin >> a ;

    evenodd(a);

}