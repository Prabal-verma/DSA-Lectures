#include<iostream>
#include<bits/stdc++.h>
using namespace std ;


int getlength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++){
        count++ ;
    }
    return count ;
}


void reverse(char name[] , int len){

    int s = 0 ;
    int e = len-1 ;

    while (s<e){
        swap(name[s++],name[e--] ) ;
    }

    cout << "Reversed string is " << name ;
}


int main(){
    char name[30] ;

    cout << "Enter Your Name " ;

    cin >> name ;

    cout << "Your name is " << name << endl ;

    int length = getlength(name) ;

    cout << "Length is " << length <<endl ;

    reverse(name , length) ;
}