#include <stdio.h>
#define TF 7

int main(){
	
	int num, vet1[TF], vet2[TF], vet3[2*TF], TL1 = 0, TL2 = 0, TL3 = 0, pos, i, j;
	
	scanf("%d",&num);

	while (TL1 < TF && num > 0){ // Preenchendo  VETOR1 ordenando
		
		pos = 0;
		
		while (pos < TL1 && num > vet1[pos])
			pos++;
			
		for (i = TL1; i > pos; i--)
			vet1[i] = vet1[i-1];
		
		vet1[pos] = num;
		TL1++;
		
		if(TL1 < TF)
			scanf("%d",&num);
	}
	printf("\n");
	
	for (i = 0; i < TL1; i++) // Exibindo VETOR1 ordenado
		printf("[%d]",vet1[i]);
		
	printf("\n\n");
		
	scanf("%d",&num);

	while (TL2 < TF && num > 0){ // Preenchendo VETOR2 ordenado
		
		pos = 0;
		
		while (pos < TL2 && num > vet2[pos])
			pos++;
			
		for (i = TL2; i > pos; i--)
			vet2[i] = vet2[i-1];
		
		vet2[pos] = num;
		TL2++;
		
		if(TL2 < TF)
			scanf("%d",&num);
	}
	printf("\n");
	
	for (i = 0; i < TL2; i++) // Exibindo VETOR2 ordenando
		printf("[%d]",vet2[i]);
		
	for(i = 0; i < TL1; i++){ // INSERINDO VETOR1 NO VETOR3 e incrementando TL3
		vet3[i] = vet1[i];
		TL3++;
	}
	
	printf("\n\n");
	
	for (j = 0; j < TL2; j++){ // Inserindo VETOR2 no VETOR3 de forma ordenada
		
		pos = 0;
		
		while (pos < TL3 && vet2[j] > vet3[pos])
			pos++;
		
		for(i = TL3; i > pos; i--)
			vet3[i] = vet3[i-1];
		
		vet3[pos] = vet2[j];
		TL3++;
	}

	
	for (i = 0; i < TL3; i++) // Exibindo o VETOR3 ordenado com VETOR2 inseridox
		printf("[%d]",vet3[i]);
	
	
	return 0;
}
