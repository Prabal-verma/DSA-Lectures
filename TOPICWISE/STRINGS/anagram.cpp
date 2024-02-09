#include<iostream>
#include<bits/stdc++.h>
using namespace std ;


bool isAnagram(string s1 , string s2){

    vector<int> freq(26 , 0) ;

    if(s1.length() != s2.length()){
        return false ;
    }
    
    for(int i = 0 ; i < s1.length(); i++){
        int index = s1[i] - 'a' ;
        freq[index] ++ ;
    }

    for(int i = 0 ; i < s2.length() ; i++){
        int index = s2[i] - 'a' ;
        freq[index]-- ;
    }

    for(int i = 0 ; i < 26 ; i ++){
        if(freq[i] != 0){
            return false ;
        }
    }

    return true ;


}

int main (){
    string s1 , s2 ;
    cout << "Enter first string : " << endl ;
    cin >> s1 ;
    cout << "Enter second string : " << endl ;
    cin >> s2 ;

    if(isAnagram(s1,s2)){
        cout << "Strings are Anagram " ;
    }
    else{
        cout << "Strings are not Anagram " ;

    }
}