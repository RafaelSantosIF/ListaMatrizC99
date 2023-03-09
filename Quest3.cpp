#include <stdlib.h>
#include <stdio.h>
#define LIN 2
#define COL 2

void matrizInversa(int matriz[][2], int l, int c){
	int i, j;
	for (i=l-1; i>=0; i--){
		for (j=c-1; j>=0; j--){
			printf("%d\t",  matriz[i][j]);
		}
		printf("\n");
	}
}

int main(void){
	int A[COL][LIN] = {1, 3, 2, 4};
	matrizInversa(A, LIN, COL);
	return 0;
}
