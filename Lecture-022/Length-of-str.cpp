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


int main(){
    char name[30] ;

    cout << "Enter Your Name " ;

    cin >> name ;

    cout << "Your name is " << name << endl ;

    cout << "Length is " << getlength(name) ;
    
}