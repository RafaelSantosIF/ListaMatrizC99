#include <stdlib.h>
#include <stdio.h>
#define LIN 3
#define COL 3

int main(void){
	int B[COL][LIN], A[COL][LIN] = {1, 4, 7, 2, 5, 8, 3, 6, 9};
	int cont = 0;
	for(int i=0; i<COL; i++){
		for(int j=0; j<LIN; j++){
			B[j][i] = A[i][j];
			printf("[%d] ", B[j][i]);
			cont++;
			if(cont == COL) printf("\n");
		}
		cont = 0;
	}	
	return 0;
}
