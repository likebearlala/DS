#include <stdio.h>
using namespace std;
void Swap(char *a,char *b);
void Permutations(string A,int i,int n){
    int j;
    if(i==n){
        cout << A << endl;
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
    string A="abc";
    Permutations(A,0,3);
}

