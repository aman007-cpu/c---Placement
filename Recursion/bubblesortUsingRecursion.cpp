#include<bits/stdc++.h>
using namespace std;

void bubbly(int *arr,int n){
    if(n==0|| n==1) return;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
            
    }

    bubbly(arr,n-1);
}

int main(){
   int arr[5] = {4,6,11,3,0};
   bubbly(arr,5);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
}