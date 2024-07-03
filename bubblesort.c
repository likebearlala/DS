#include<stdio.h>
void Swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void BubbleSort(int A[], int n){
    int i, j, flag, count;
    count=0;
    for(i = 0; i < n - 1; i++){
        flag = 0;
        count++;
        for(j = 0; j < n - 1 - i; j++){ 
            count++;
            if(A[j] > A[j + 1]){
                Swap(&A[j], &A[j + 1]);
                count++;
                flag = 1;
            }
        }
        if(flag == 0){ 
            break;  
        }
    }
    printf("%d",count);
}
int main(void) {
    int A[]={43,55,22,99,33,44};
    int len=sizeof(A)/sizeof(A[0]);
    BubbleSort(A,len);
    for(int i=0;i<len;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}

