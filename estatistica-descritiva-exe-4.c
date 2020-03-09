#include <stdio.h>
#include <math.h>
#include <locale.h>
#define TF 60


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int TL = 0, num, vet[TF], i, soma = 0;
	double media, desviopadrao = 0;
	
	while (TL < TF){
		
		scanf("%d",&num);
		
		int pos = 0;
		
		while(pos < TL && num > vet[pos])
			pos++;
				
		for(i = TL; i > pos; i--)
			vet[i] = vet[i-1];
		
		vet[pos] = num;
		
		TL++;
	}
	printf("\n\nROL:\n");
	for(i = 0; i < TL; i++)
		printf("%dº - %d\n", i+1,vet[i]);
		
	printf("\n\nn = %d", i);
	
	for(i = 0; i < TL; i++)
		soma += vet[i];
	printf("\nSoma = %d", soma);
	
	media = (double)soma / TF;
	printf("\nMedia = %.2lf", media);
	
	for(i = 0; i < TL; i++)
		desviopadrao = desviopadrao + pow(vet[i] - media,2);
		
	printf("\nDesvio Padrao: %.0lf/59 = %.4lf --> s = %.4lf Kg (~=) %.2lf Kg", desviopadrao, desviopadrao/(TF - 1), sqrt(desviopadrao/(TF - 1)),sqrt(desviopadrao/(TF - 1)));
	
	printf("\nBy: Victor Taveira");
	
	return 0;
}
