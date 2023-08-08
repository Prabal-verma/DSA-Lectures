#include<iostream>
using namespace std;

int firstOcc(int arr[],int size ,int key){
    int s = 0 , e = size -1 ;
    int mid = s + (s+e)/2 ;
    int ans = -1;
    while(s<=e){

        if(key == arr[mid]){
            ans = mid;
            e = mid - 1;
        }
        else if(key>mid){
            s = mid +1 ;

        }
        else if (key<mid){
            e = mid-1 ;
        }
        mid = s + (e-s)/2 ;
        

    }
    return ans;
}


int lastOcc(int arr[],int size ,int key){
    int s = 0 , e = size -1 ;
    int mid = s + (s+e)/2 ;
    int ans = -1;
    while(s<=e){

        if(key == arr[mid]){
            ans = mid;
            s = mid + 1;
        }
        else if(key>mid){
            s = mid +1 ;

        }
        else if (key<mid){
            e = mid-1 ;
        }
        mid = s + (e-s)/2 ;
        

    }
    return ans;
}


int main(){
    int arr[10]={1,2,3,3,3,3,3,3,5,6};

    cout << "first occurence of 3 is at index : "<< firstOcc(arr,10,3) << endl ;
    cout << "last occurence of 3 is at index : "<< lastOcc(arr,10,3) ;

}