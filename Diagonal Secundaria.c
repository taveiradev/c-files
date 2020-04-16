#include <stdio.h>
#include <conio.h>
#define TF 3

main(){
	
	int mat[TF][TF], l, c, cont;
	
	
	for (c = 0, cont=1; c < TF; c++)
		for(l = 0; l < TF; l++){
			mat[l][c] = cont;
			cont++;
		}
		
		
	printf("Diagonal Principal: ");
	for (cont = 0; cont < TF; cont++)
		printf("[%d]",mat[cont][cont]);
	
	printf("\n\nDiagonal Secundaria: ");
	for(l = TF - 1, c = 0; l >= 0 && c < TF; l--, c++)
		printf("[%d]",mat[l][c]);
			
	getch();
}
