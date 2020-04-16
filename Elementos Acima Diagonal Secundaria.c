#include<stdio.h>
#define TF 6

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
				printf("[ %d]",mat[l][c]);
			else
				printf("[%d]",mat[l][c]);
		printf("\n");
	}
	printf("--------------------------------------");
	//printf("______________________________________");
	printf("\nElementos da Diagonal Principal\n\n");
	for(l = 0; l < TF; l++){
		for(c = 0; c < TF; c++)
			if (l == c)
				if(mat[l][c] < 10)
					printf("[ %d]",mat[l][c]);
				else
					printf("[%d]",mat[l][c]);
			else
				printf("    ");
		printf("\n");
	}
	printf("\n--------------------------------------");
	printf("\nElementos Acima da Diagonal Principal\n\n");
	for (l = 0; l < TF - 1; l++){
		for (c = 0; c < TF; c++)
			if (l + 1 <= c)
				if(mat[l][c] < 10)
					printf("[ %d]",mat[l][c]);
				else
					printf("[%d]",mat[l][c]);
			else
				printf("    ");
		printf("\n");
	}
	
	printf("\n--------------------------------------");
	printf("\nElementos Abaixo da Diagonal Principal\n\n");
	for (l = 1; l < TF; l++){
		for (c = 0; c < l; c++)
			if(mat[l][c] < 10)
				printf("[ %d]",mat[l][c]);
			else
				printf("[%d]",mat[l][c]);
		printf("\n");
	}
	
	printf("\n--------------------------------------");
	printf("\nElementos Acima da Diagonal Secundaria\n\n");
	for(l = 0; l < TF; l++){
		for(c = 0; c < TF; c++)
			if(l < TF - (c+1))
				if(mat[l][c] < 10)
					printf("[ %d]",mat[l][c]);
				else
					printf("[%d]",mat[l][c]);
		printf("\n");
	}
	system("pause");
}
