#include <stdlib.h>
#include <stdio.h>
#define LIN 2
#define COL 2

int main(void){
	int B[COL][LIN], A[COL][LIN] = {1, 3, 2, 4};
	int cont = 0, ib = 0, jb = 0;
	for(int j=0; j<LIN; j++){
		for(int i=COL-1; i >= 0; i--){
			B[ib][jb] = A[i][j];
			jb++;
		}
		ib++;
	}	
	for(int k=0; k<COL; k++){
		for(int l=0; l<LIN; l++){
			printf("[%d] ", B[k][l]);
			cont++;
			if(cont == COL) printf("\n");
		}
		cont = 0;
	}
	return 0;
}
