#include<bits/stdc++.h>
using namespace std;

void bubble(int ar[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                swap(ar[i],ar[j]);
            }
        }
    }
}

int main(){
    int ar[] = {20,5,40,10,30,50};

     bubble(ar,6);
   for(int i=0;i<6;i++){
    cout<<ar[i]<<" ";
   }
}

