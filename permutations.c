#include <stdio.h>
void Swap(char *a,char *b);
void Permutations(char *A,int i,int n){
    int j;
    if(i==n){
        for(j=0;j<n;j++){
            printf("%c",A[j]);
        }
        printf("\n");
    }else{
        for(j=i;j<n;j++){
            Swap(&A[i],&A[j]);
            Permutations(A,i+1,n);
            Swap(&A[i],&A[j]);
        }
    }
}

void Swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    char A[]="abc";
    Permutations(A,0,3);
    return 0;
}


