#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int sliding_window(string s , int k){
    int start = 0 , end = 0  , zero_count = 0 , max_length = 0 ;
    for(end ; end< s.length() ; end++){
        if(s[end] == '0'){
            zero_count++ ;
        }
        while(zero_count>k){
            if(s[start] == '0'){
                zero_count-- ;
            }
            start++ ;
        }

        max_length = max(max_length,end-start+1) ;

        
    }
    return max_length ;
}


int main(){
    string s;
    int k ;
    cout << "Enter binary String : " ;
    cin >> s ;
    cout << "Enter the value of k : " ;
    cin >> k ;
    cout << "The longest consecutive 1 are : " << sliding_window(s,k) ;
}