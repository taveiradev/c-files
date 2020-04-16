#include <stdio.h>
#include <conio.h>
#include <string.h>
#define TF 3 //valor de teste
main (){
	
	int vNumVoo[TF], vLugares[TF], opcao, i, NVoo, pass;
	
	char vOrigem[TF][50], vDestino[TF][50], Voo[50];
	
	for(i = 0; i < TF; i++){
		printf("Numero Voo: ");
		scanf("%d",&vNumVoo[i]);
		
		printf("Origem: ");
		fflush(stdin);
		gets(vOrigem[i]);
		
		printf("Destino: ");
		fflush(stdin);
		gets(vDestino[i]);
		
		printf("Lugares: ");
		scanf("%d",&vLugares[i]);
		printf("\n");
	}
	
	do{
		printf("[1 - Consultar] [2 - Efetuar reserva] [3 - Sair]: ");
		scanf("%d",&opcao);
		
		switch (opcao){
			case 1:
				
				printf("\n[1 - Por numero] [2 - Por origem] [3 - Por destino]: ");
				scanf("%d",&opcao);
				
				if (opcao == 1){
					
					printf("\nNumero Voo: ");
					scanf("%d",&NVoo);
					
					i = 0;
					while (i < TF && NVoo != vNumVoo[i])
						i++;
						
					if(i != TF)
						printf("\n[Voo: %d] [Origem: %s] [Destino: %s] [Lugares: %d]\n\n",vNumVoo[i],vOrigem[i],vDestino[i],vLugares[i]);
					else
						printf("\nVoo Nao Encontrado\n\n");
				}
				
				if (opcao == 2){
					
					printf("Origem: ");
					fflush(stdin);
					gets(Voo);
					
					for(i = 0; i < TF; i++)
						if (stricmp(Voo,vOrigem[i]) == 0){
							
							printf("\n[Voo: %d]",vNumVoo[i]);
							printf("[Origem: %s]",vOrigem[i]);
							printf("[Destino: %s]",vDestino[i]);
							printf("[Lugares: %d]",vLugares[i]);
						}
					printf("\n");
				}
				if (opcao == 3){
					
					opcao = 0;
					
					printf("Destino: ");
					fflush(stdin);
					gets(Voo);
					
					for(i = 0; i < TF; i++)
						if (stricmp(Voo,vDestino[i]) == 0){
							
							printf("\n[Voo: %d] ",vNumVoo[i]);
							printf("[Origem: %s] ",vOrigem[i]);
							printf("[Destino: %s] ",vDestino[i]);
							printf("[Lugares: %d]",vLugares[i]);
						}
					printf("\n\n");
				}
				break;
			case 2:
				
				printf("\nVoo: ");
				scanf("%d",&NVoo);
				
				printf("Passagens: ");
				scanf("%d",&pass);
				
				i = 0;
				while (i < TF && NVoo != vNumVoo[i])
					i++;
					
				if (i < TF){
					
					if (vLugares[i] < pass)
						printf("\nVoo lotado\n");
					else{
						printf("\nReserva Confirmada\n");
						vLugares[i] -= pass;
					}	
				}
				else
					printf("\nVoo Inexistente\n\n");
				break;
			case 3:
				system("cls");
				printf("FIM...\n");
				break;
			default:
				printf("\nOpcao Invalida\n	");
		}
	}while(opcao != 3);
	getch();
}
