#include<stdio.h>
#define TF 9 // (Matriz Quadrada) de 1 a 9, para não estourar o desenho
// by: Victor R.
main (){
	int mat[TF][TF], l, c, cont;
	
	for(cont = 1, l = 0; l < TF; l++)
		for(c = 0; c < TF; c++){
			mat[l][c] = cont;
			cont++;
		}
	for(l = 0; l < TF; l++){
		for(c = 0; c < TF; c++)
			if(mat[l][c] < 10)
				printf("[0%d]",mat[l][c]);
			else
				printf("[%d]",mat[l][c]);
		printf("\n");
	}
	
	printf("--------------------------------------");
	printf("\nElementos Acima da Diagonal Principal\n\n");
	for (l = 0; l < TF - 1; l++){
		for (c = 0; c < TF; c++)
			if (l + 1 <= c)
				if(mat[l][c] < 10)
					printf("[0%d]",mat[l][c]);
				else
					printf("[%d]",mat[l][c]);
			else
				printf("    ");
		printf("\n");
	}
	
	printf("\n--------------------------------------");
	printf("\nElementos da Diagonal Principal\n\n");
	for(l = 0; l < TF; l++){
		for(c = 0; c < TF; c++)
			if (l == c)
				if(mat[l][c] < 10){
					printf("[0%d]",mat[l][c]);
					break;
				}
				else{
					printf("[%d]",mat[l][c]);
					break;
				}
			else
				printf("    ");
		printf("\n");
	}
	
	printf("\n--------------------------------------");
	printf("\nElementos Abaixo da Diagonal Principal\n\n");
	for (l = 1; l < TF; l++){
		for (c = 0; c < l; c++)
			if(mat[l][c] < 10)
				printf("[0%d]",mat[l][c]);
			else
				printf("[%d]",mat[l][c]);
		printf("\n");
	}
	
	printf("\n--------------------------------------");
	printf("\nElementos Acima da Diagonal Secundaria\n\n");
	for(l = 0; l < TF; l++){
		for(c = 0; c < TF - 1 - l; c++)
			if(mat[l][c] < 10)
				printf("[0%d]",mat[l][c]);
			else
				printf("[%d]",mat[l][c]);
		printf("\n");
	}
	
	printf("--------------------------------------");
	printf("\nElementos da Diagonal Secundaria\n\n");
	for(l = 0; l < TF; l++){
		for(c = 0; c < TF - l; c++)
			if (c == TF - 1 - l)
				if(mat[l][c] < 10)
					printf("[0%d]",mat[l][c]);
				else
					printf("[%d]",mat[l][c]);
			else
				printf("    ");
		printf("\n");
	}
	
	printf("\n--------------------------------------");
	printf("\nElementos Abaixo da Diagonal Secundaria\n\n");
	for(l = 1; l < TF; l++){
		for(c = 0; c < TF; c++)
			if (c > TF - 1 - l)		
				if(mat[l][c] < 10)
					printf("[0%d]",mat[l][c]);
				else
					printf("[%d]",mat[l][c]);
		else
			printf("    ");	
		printf("\n");
	}
	printf("\nBy: Victor R.\n\n");
	system("pause");
}
