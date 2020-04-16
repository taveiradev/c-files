#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define line 10 //#define line 10
#define col 5	//#define col 5

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char vetpro[line][40];
	float valoruni[line][1], somatot[1][col], somaf=0;
	int estoqueqt[line][col], qttot[2][line], somai=0, l, c;
	
	for(l=0; l<line; l++) // ITEM A)
	{
		printf("Digite o %d° produto: ",l+1);
		gets(vetpro[l]);
	}
	printf("\n");
	for(c=0; c<col; c++) // ITEM B)
	{
		for(l=0; l<line; l++)
		{
			printf("Quantidade de (%s) no armazém (%d): ",vetpro[l],c+1);
			scanf("%d",&estoqueqt[l][c]);
		}
		printf("\n");
	}
	for(l=0; l<line; l++) // ITEM C)
	{
		printf("Preço (%s): ",vetpro[l]);
		scanf("%f",&valoruni[l]);
	}
	printf("\n");
	for(c=0; c<col; c++) // ITEM D)
	{
		for (l=0; l<line; l++)
			somai=somai+estoqueqt[l][c];
		qttot[0][c] = somai;
		printf("\nTotal de Itens armazem (%d): %d",c+1,qttot[0][c]);
		somai=0;
	}
	printf("\n");
	for(l=0; l<line; l++) // ITEM E)
	{
		for (c=0; c<col; c++)
			somai=somai+estoqueqt[l][c];
		qttot[1][l] = somai;
		printf("\nProduto (%s): %d",vetpro[l],qttot[1][l]);
		somai=0;
	}
	printf("\n");
	for(c=0; c<col; c++) // ITEM F)
	{
		for(l=0;l<line;l++)
			somaf=somaf+(estoqueqt[l][c]*valoruni[l][0]);
		somatot[0][c]=somaf;
		printf("\nTotal do Armazen (%d): %.2f",c+1, somatot[0][c]);
		somaf=0;
	}
	getch();
}
