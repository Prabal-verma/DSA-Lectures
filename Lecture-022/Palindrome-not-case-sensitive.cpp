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


char tolowercase(char ch){

    if(ch>='a' & ch <= 'z'){
        return ch ;
    }
    else{
        char temp = ch - 'A' + 'a' ;
        return temp ;
    }
    
}




bool check_palindrome(char str[] , int len){

    int s = 0 ; int e = len-1 ; 

    while(s<=e){
        if(tolowercase(str[s])!=tolowercase(str[e])){
            return 0 ;
        }
        else{
            s++ ;
            e-- ;
        }
    } 
    return 1 ;
}

int main(){
    char name[30] ;

    cout << "Enter Your Name " ;

    cin >> name ;

    cout << "Your name is " << name << endl ;

    cout << "Length is " << getlength(name) << endl ;
    int len = getlength(name) ;

    cout << "palindrome or not " << check_palindrome(name , len) ;
    
}