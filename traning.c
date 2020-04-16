#include<stdio.h>
#include<string.h>
#include<conio.h>
#define TF 2

main (){
	
	char participantes[TF][31], nome[31];
	float apostas[TF], valor;
	int  i = 0, TL = 0, in;
	
	do{
		if(TL > 0)
			if(TL < TF)
				printf("[1 - Inserir] [2 - Excluir] [3 - Alterar] [0 - Finalizar]: ");
			else
				printf("[2 - Excluir] [3 - Alterar] [0 - Finalizar]: ");
		else
			printf("[1 - Inserir] [0 - Finalizar]: ");
			
		scanf("%d",&in);
		
		switch (in){
			
			case 1:
				if(TL < TF){
					printf("\nQuem: ");
					fflush(stdin);
					gets(participantes[TL])	;
					printf("Valor: ");
					scanf("%f",&apostas[TL]);
					TL++;
				}
				else
					printf("\nNumero Maximo de Apostas!\n");
				printf("\n");
				break;
			case 2:
				printf("\nQuem: ");
				fflush(stdin);
				gets(nome);
				i = 0;
				//TL = 4
				while(i < TL && stricmp(participantes[i],nome) != 0)
					i++;
				if(i < TL){
					for(;i < TL - 1; i++){
						strcpy(participantes[i],participantes[i+1]);
						apostas[i]=apostas[i+1];
					}
					TL--;	
				}
				else
					printf("\nNao Encontrado!\n");
				printf("\n");
				break;
			case 3:
				printf("\nQuem: ");
				fflush(stdin);
				gets(nome);
				i = 0;
				while(i < TL && stricmp(participantes[i],nome) != 0)
					i++;
				if (i < TL){
					printf("Novo Valor: ");
					scanf("%f",&valor);
					apostas[i] = valor;
					printf("[Nome: %s] [Novo Valor %.2f]\n\n",participantes[i],apostas[i]);
				}
				else
					printf("\nNao Encontrado!\n\n");
				break;
			case 0:
				printf("\nFIM\n");
				break;
			default:
				printf("\nEntrada Invalida\n\n");
		}
	}while (in != 0);
	for (i = 0; i < TL; i++)
		printf("\n[Nome: %s] [Valor: %.2f]",participantes[i],apostas[i]);
	getch();
}
