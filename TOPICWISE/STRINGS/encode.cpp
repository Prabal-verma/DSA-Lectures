#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string encode(string s){
        string result ;


    // Traversing the string
    for(int i = 0 ; i < s.length()  ; i++){
        if(s[i] != ']'){
            result.push_back(s[i]) ;
        }
        else{
            // extract str from result 
            string str = "" ;
            while(!result.empty() && result.back() != '['){
                str.push_back(result.back()) ;
                result.pop_back() ;
            }

            // reversing the str 

            reverse(str.begin() , str.end()) ;

            // remove last char from result 
            result.pop_back() ;
            
            // extract num from result

            string num = "";

            while(!result.empty() && result.back() >= '0' && result.back() <= '9'){
                num.push_back(result.back()) ;
                result.pop_back() ;
            }

            //reversing num

            reverse(num.begin(), num.end()) ;

            // converting string to int
            int n = stoi(num) ;        

            // inserting str in result n times    

            while(n){
                result += str ;
                n-- ;
            }
        }
    }

    return result ;
}

int main(){
    string str ;
    cout<<"Enter the string : " ;
    cin >> str ;
    cout << encode(str) ;
}