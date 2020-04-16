#include <stdio.h>
#include <conio.h>
#define col 4
#define line 4

main (){
	
	float est[line+1][col], a, maior = 0, menor = 999999999, tot;
	int c, l, b, ic;
	
	for (l = 0; l < line; l++){
		for (c = 0; c < col; c++){
			printf("Produto [%d] Armazem [%d]: ",c+1,l+1);
			scanf("%f",&est[l][c]);
		}
		printf("\n");
	}
		
	for (c = 0; c < col; c++){
		printf("Preco Produto: R$ [%d]: ",c+1);
		scanf("%f",&est[line][c]);
	}
	printf("\n");
	
	for (l = 0; l < line; l++){
		for (c = 0; c < col; c++)
			printf("[%.0f]",est[l][c]);
		printf("\n");
	}
	
	for (c = 0; c < col; c++)
		printf("[%.2f]",est[line][c]);
		
		
	// ITEM A
	printf("\n\nItem (A)");
	for (l = 0; l < line; l++){
		a = 0;
		for (c = 0; c < col; c++)
			a+=est[l][c];
		printf("\nArmazem Qtde [%d]: %.0f",l+1,a);
	}	
	// ITEM A
	
	// ITEM B
	for (l = 0; l < line; l++)
		if (est[l][1] > maior){
			maior = est[l][1];
			b = l+1;
		}
	printf("\n\nItem (B)");
	printf("\nArmazem [%d] Pro[2] Maior Qtde: %.0f",b,maior);
	// ITEM B
	
	// ITEM C
	for(l = 0; l < line; l++)
		if (est[l][3] < menor){
			menor = est[l][3];
			ic = l + 1;
		}
	printf("\n\nItem (C)");
	printf("\nArmazem [%d] Pro[4] Menor Qtde: %.0f\n",ic,menor);
	// ITEM C	
	
	// ITEM D
	printf("\nItem (D)");
	for (c = 0; c < col; c++){
		tot = 0;
		for (l = 0; l < line; l++)
			tot+= est[l][c] * est[line][c];
		printf("\nTotal Produto [%d]: R$ %.2f",c+1,tot);
	}
	// ITEM D
	
	// ITEM E
	printf("\n\nItem (E)");
	for (l = 0; l < line; l++){
		tot = 0;
		for (c = 0; c < col; c++)
			tot+= est[l][c] * est[line][c];
		printf("\nTotal Armazem [%d]: R$ %.2f",l+1,tot);
	}
	// ITEM E
	getch();
	
}
