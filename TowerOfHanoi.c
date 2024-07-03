
#include <stdio.h>
void TowerOfHanoi(int n,char A,char B,char C){ // 設起始地A,途經地B,目的地C
	if(n==1){
		printf("\n move disk 1 from %c to %c",A,C);
		return;
	}
	else{
		TowerOfHanoi(n-1,A,C,B);
		printf("\n move disk %d from %c to %c",n,A,C);
		TowerOfHanoi(n-1,B,A,C);
	}
}
int main() {
    int n = 3; // disk數量
    TowerOfHanoi(n, 'A', 'C', 'B'); // A, B 和 C 是地點名
    return 0; 
}
