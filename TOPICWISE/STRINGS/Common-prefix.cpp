#include<iostream>
#include<bits/stdc++.h>
using namespace std ;


string LongestCommonPrefix(vector<string> &str){


    //Sorting the array of strings

    sort(str.begin() , str.end()) ; 

    string s1 = str[0] ;  // First String
    string s2 = str[str.size()-1] ;  // Last string

    int i = 0 , j = 0 ;

    string ans = "" ;
     
    while(i<s1.size() && j<s2.size()){
        if(s1[i] == s2[j]){
            ans+=s1[i] ;
            i++ , j++ ;
        }
        else{
            break ;
        }
    }

    return ans ;
}



int main(){
    int n ;
    cout << "Enter number of strings : " ;
    cin >> n ;
     
    cout << "Enter strings : " ;
    vector<string> str(n) ;

    for(int i = 0 ; i < n ; i++){
        cin >> str[i] ;
    }

    cout << "Longest common prefix is : " << LongestCommonPrefix(str) << endl ;


}