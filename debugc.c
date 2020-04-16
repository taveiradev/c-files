#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define TF 11
int main()
{
	int vetcpf[TF], num, soma=0, i=0, mult=10, resto, dig1, dig2;
	setlocale(LC_ALL,"Portuguese");
	do
	{
		printf("Digite os números do CPF: ");
		scanf("%d",&num);
		vetcpf[i]=num;
		if(i<9)
		{
			soma=soma+num*mult;
			mult--;
		}
		i++;
	}while (i<11);
	resto=soma%11;
	dig1=11-resto;
	if (dig1==10||dig1==11)
		dig1=0;
	mult=11;
	soma=0;
	for(i=0; i<10; i++)
	{
		soma=soma+vetcpf[i]*mult;
		mult--;
	}
	resto=soma%11;
	dig2=11-resto;
	if(dig2==10 || dig2==11)
		dig2=0;
	if(dig1==vetcpf[9]&&dig2==vetcpf[10])
		printf("\nCPF CORRETO!");
	else
		printf("\nCPF INVÁLIDO!");
	getch();
	return 0;		
}
