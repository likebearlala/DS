#include<stdio.h>

int kthsmall(int A[],int n,int k){
    
    int key;
    if(k>0&&k<=n){
        
        for(int i=0;i<=n-1;i++){
            int l=0;
            for(int j=0;j<=n-1;j++){
                if(A[j]<A[i])
                    l=l+1;
            }
            l=l+1;
            if(l==k) {
                key=A[i];
                break;     
            }

        }
    return key;
    }
    else
        return -1;
}
    

int main(void) {
    int A[]={1,20,56,4,5};
    int k=kthsmall(A,5,2);
    printf("%d",k);
    return 0;
}
