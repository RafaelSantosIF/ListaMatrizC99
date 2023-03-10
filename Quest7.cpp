#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 3
#define C 3

int main(){
	int i, j, m[L][C] = {2, 0, 1, 3, 4, -2, 8, 9, 6}, soma[C];

	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			if(i==j) m[i][j] = 1;
			else m[i][j] = 0;
		}
	}

	printf("\n\n  Matriz Diagonal\n\n");
	for(i=0; i < L; i++){
		printf("  %d [ ", i);
		for (j=0; j < C; j++){
			soma[j] = soma[j]+(m[i][j]);
			printf("%d ", m[i][j]);
		}
		printf("]\n");
	}


	return 0;
}
