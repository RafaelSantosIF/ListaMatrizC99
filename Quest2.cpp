#include <stdlib.h>
#include <stdio.h>
#define LIN 2
#define COL 2

int main(void){
	int A[COL][LIN] = {1, 3, 2, 4}, B[COL][LIN] = {5, 7, 6, 8}, C[COL][LIN];
	int cont = 0, k = 0;;
	for(int i=0; i<COL; i++){
		for(int j=0; j<LIN; j++){
			C[i][j] = (B[k][j] * A[i][k]);
			k=1;
			C[i][j] += (B[j][k] * A[k][i]);
			printf("[%d] ", C[i][j]);
			cont++;
			if(cont == COL) printf("\n");
		}
		cont = 0;
		k = 0;
	}	
	return 0;
}
