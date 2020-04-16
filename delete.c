#include <stdio.h>
 
int main() {
 
    int cod_roupa, qtde, tot_tipos=0, maior_qtde, cod_maior_total;
    char cor, cor_maior_qtde, cor_menor_preco;
    float preco, tot, menor_preco, maior_total=0;
	
	
	printf("Codigo da roupa: ");
	scanf("%d",&cod_roupa);
	
	while(cod_roupa > 0){
		
		printf("\nCor: ");
		fflush(stdin);
		scanf("%c",&cor);
		
		tot = 0;
		maior_qtde = 0;
		menor_preco = 999999999; 
		
		while(cor != ' '){
			
			printf("Quantidade: ");
			scanf("%d",&qtde);
		
			printf("Preco Unitario: R$ ");
			scanf("%f",&preco);
			
			tot = tot + qtde * preco;
			
			if(qtde > maior_qtde){ // ITEM (B)
				maior_qtde = qtde;
				cor_maior_qtde = cor;
			}
			if(preco < menor_preco){ // ITEM (C)
				menor_preco = preco;
				cor_menor_preco = cor;
			}
						
			printf("Total Parcial: R$ %.2f\n",qtde*preco);
			
			printf("\nCor: ");
			fflush(stdin);
			scanf("%c",&cor);
		}
		if(tot > maior_total){
			maior_total = tot;
			cod_maior_total = cod_roupa;
		}
		printf("Total:................................ %.2f",tot);
		tot_tipos++; //ITEM (A)
		printf("\nCor de Maior Quantidade: %c, Quantidade: %d",cor_maior_qtde,maior_qtde); //ITEM (B)
		printf("\nCor com menor preco unitario: '%c' Preco: %.2f",cor_menor_preco,menor_preco); // ITEM (C)
		
		printf("\nCodigo da roupa: ");
		scanf("%d",&cod_roupa);
	}
	printf("\nQuantidade de tipos de roupas: %d",tot_tipos);
	printf("\nRoupa Cod: %d, Obteve maior total: R$ %.2f",cod_maior_total,maior_total);
    return 0;
}
