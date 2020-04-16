#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

#define TFA 2 //alunos
#define TFD 7 //disciplinas
#define TFN 600
#define str_size 30

main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, x, TL = 0, pos;	
	char mat_ra[TFA][str_size], mat_nome[TFA][str_size], mat_disc[TFD][str_size], vet_input[str_size];
	float mat_notas[TFN][3];
	
	system("color e");
	
	// STAGE ONE
	for (i = 0; i <  TFA; i++){
		
		printf("%dº Ra: ",i+1);
		fflush(stdin);
		gets(mat_ra[i]);
		
		printf("%dº Nome: ",i+1);
		fflush(stdin);
		gets(mat_nome[i]);
		
		printf("\n");
	}
	
	for (i = 0; i < TFD; i++){
		
		printf("%dº Disciplina: ",i+1);
		fflush(stdin);
		gets(mat_disc[i]);
	}
	system("color b");
	// STAGE TWO
	do{
		do{
			printf("\nRa: ");
			fflush(stdin);
			gets(vet_input);
			
			if (vet_input[0] != '\0'){
				
				pos = 0;
				
				while (pos < TFA && stricmp(vet_input, mat_ra[pos]) != 0)
					pos++;
					
				if (pos < TFA){
					mat_notas[TL][0] = pos;
					mat_notas[TL+1][0] = pos;
				}
				else
					printf("Ra não Encontrado!\n");
			}
			
		}while (vet_input[0] != '\0' && pos == TFA);
		
		if (vet_input[0] != '\0'){
			
			do{
				printf("Disciplina: ");
				fflush(stdin);
				gets(vet_input);
				
				pos = 0;
				
				while (pos < TFD && stricmp(vet_input, mat_disc[pos]) != 0)
					pos++;
					
				if (pos < TFD){
					mat_notas[TL][1] = pos;
					mat_notas[TL+1][1] = pos;
				}
				else
					printf("Disciplina não Encontrada!\n\n");
					
			}while (pos == TFD);
			//printf("\n");
			
			for (i = 0; i < 2; i++){
				printf("Nota %dº Bim: ",i+1);
				scanf("%f",&mat_notas[TL+i][2]);
			}
			TL += 2;
		}
	} while (vet_input[0] != '\0' && TL < TFN);
	
	system("color a");
	
	// STAGE THREE
	for (i = 0; i < TFA; i++){
		
		j = 0;
		x = 0;
		do{
			if (i == mat_notas[j][0]){
				if (x == 0){
					printf("\nAluno: %s - %s",mat_ra[i],mat_nome[i]);
					x = 1;
				}
				pos = mat_notas[j][1];
				printf("\nDisciplina: %.0f - %s    ",mat_notas[j][1], mat_disc[pos]);
				printf("	Nota 1: %.1f",mat_notas[j][2]);
				printf("	Nota 2: %.1f",mat_notas[j+1][2]);
				printf("	Média: %.1f",(mat_notas[j][2] + mat_notas[j+1][2])/2);
			}
			j += 2;
		}while(j < TL);
		printf("\n");
	}
	getch();
}





