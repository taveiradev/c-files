#include <stdio.h>
#define TF 5

int main () {
	
	int num, i, pos, vet[TF], TL = 0;
	
	scanf("%d",&num);
	
	while (TL < TF && num > 0){
		
		pos = 0;
		
		while (pos < TL && num > vet[pos]) // Encontrando melhor posição
			pos++;
			
		for(i = TL; i > pos; i--) // Remanejando
			vet[i] = vet[i-1];
		
		vet[pos] = num; // Inserindo na melhor posição encontrada
			TL++;
		
		if (TL < TF)	
			scanf("%d",&num);
	}
	
	for(i=0; i < TL; i++)	// Exibindo vetor ordenado
		printf("[%d]",vet[i]);
	
	return 0;
}
