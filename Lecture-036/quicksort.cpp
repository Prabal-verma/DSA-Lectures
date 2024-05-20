#include<iostream>
using namespace std;


int partition(int arr[], int s, int e){
  int pivot = arr[s];

  // couting elements lesser than pivot
  int cnt = 0;
  for(int i = s+1; i<=e ; i++){
    if(arr[i]<=pivot){
      cnt++;
    }
  }

  // right place of pivot
  int pivotIndex = s+cnt;
  swap(arr[pivotIndex], arr[s]);

  //  sorting left and right part

  int i = s,j=e;

  while(i<pivotIndex && j>pivotIndex){
    while(arr[i]<pivot){
      i++;
    }
    while(arr[j]>pivot){
      j--;
    }

    if(i<pivotIndex && j>pivotIndex){
      swap(arr[i++],arr[j--]);
    }
  }
  return pivotIndex ;

  
}


void quicksort(int arr[],int s,int e){

  // base case
  if(s>=e){
    return;
  }
  // partition
  int p = partition(arr,s,e);

  // sorting left side
  quicksort(arr,s,p-1);

  // sorting right side
  quicksort(arr,p+1,e);
}


int main(){
  
  int arr[] = {3,5,4,1,9,7};
  int n = 6;


  quicksort(arr,0,n-1);
  for(int i= 0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;


  return 0;
}