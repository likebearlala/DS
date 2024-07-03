#include<stdio.h>
void sort(int arr[],int i,int key){

    int j=i;
    while(j>=0&&key<arr[j]){
       arr[j+1]=arr[j];
       j--;
        
    }
    arr[j+1]=key;
    
}
void insert(int arr[],int n){
    for(int i=0;i<n-1;i++){
        sort(arr,i,arr[i+1]);
    }
        
}


