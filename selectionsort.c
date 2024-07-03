#include<stdio.h>
void Swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void SelectionSort(int A[],int n){
    int i,j,min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=(i+1);j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
        }
        if(i!=min){
            Swap(&A[min],&A[i]);
        }
    }
}

int main(void) {
    int A[]={43,55,22,99,33};
    int len=sizeof(A)/sizeof(A[0]);
    SelectionSort(A,len);
    for(int i=0;i<len;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}

