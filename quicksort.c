#include <stdio.h>
void Swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void QuickSort(int A[],int left,int right){
    if(left<right){
        int i=left;
        int pivot=left;
        int j=right+1;
        do{
            do{i++;}while(A[i]<A[pivot]);
            do{j--;}while(A[j]>A[pivot]);
            if(i<j){Swap(&A[i],&A[j]);}
        }while(i<j);
        Swap(&A[pivot],&A[j]);
        QuickSort(A,left,j-1);
        QuickSort(A,j+1,right);
    }
}

int main(void) {
    int A[]={1,6,3,3,4,6,1,3};
    int n = sizeof(A)/sizeof(A[0]);
    QuickSort(A,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d",A[i]);
    }
    return 0;
}


