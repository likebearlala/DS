#include<stdio.h>
#define MAXSTACK 100
int top=0;
bool isempty(int arr[]){
    if(top==0){
        return true;
    }
    return false;
}
bool isFull(int arr[]){
    if(top==MAXSTACK){
        return true;
    }
    return false;
}
int pop(int arr[]){
    if(!isempty(arr)){
        return arr[top--];
    }
    printf("stack空");
    return -1;
}
void push(int arr[],int key){
    if(!isFull(arr)){
        top++;
        arr[top]=key;
    }
    else{
        printf("stack滿");
    }
}

    


