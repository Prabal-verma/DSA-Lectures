#include<iostream>
using namespace std;

int main(){
    int a ,b ;
    char op ;

    cout << "Enter the first Number : " ;
    cin >> a ;

    cout << "Enter the second Number : " ;
    cin >> b ;

    cout << "Enter the Operator : " ;
    cin >> op ;

    switch(op){
        case '+' : cout << a+b ;
            break ;
        case '-' : cout << a-b ;
            break ;
        case '*' : cout << a*b ;
            break ;
        case '/' : cout << a/b ;
            break ; 
    }
    

}

