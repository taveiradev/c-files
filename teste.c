#include <stdio.h>
#include <conio.h>
#define TF 5


int main(){
	
	int mat[TF][TF][TF], i, j, k;
	
	for(i = 1; i < TF; i++){
		for(j = 1; j < TF; j++){
			for(k = 1; k < TF; k++){
				mat[i][j][k] = 1;
			}
		}
	}
	for(i = 1; i < TF; i++){
		for(j = 1; j < TF; j++){
			for(k = 1; k < TF; k++){
				printf("[%d]",mat[i][j][k]);
			}
			printf("\n");
		}
	}
	
	
	getch();
}
