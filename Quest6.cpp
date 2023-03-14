#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 3
#define C 3

int main(){
	int i, j, m[L][C] = {2, 0, 1, 3, 4, -2, 8, 9, 6}, soma[C];
	int aux = m[0][0];
	
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			
			if(i==j){
				m[i][j] = m[i+1][j+1];
				if(i==L-1 && j==C-1) m[i][j] = aux;
			} 
			else m[i][j] *= -1;
		}
	}

	printf("\n\n  Matriz Cofatora\n\n");
	for(i=0; i < L; i++){
		printf("  %d [ ", i);
		for (j=0; j < C; j++){
			soma[j] += (m[i][j]);
			printf("%02d ", m[i][j]);
		}
		printf("]\n");
	}


	return 0;
}
