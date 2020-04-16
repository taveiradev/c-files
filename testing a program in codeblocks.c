#include <stdio.h>
#include <conio.h>
#include <locale.h>

#define TF 5
int main()
{
	int vet1[TF],vet2[TF], vet3[TF*2],TL1=0,TL2=0,TL3=0,num,pos,i,j,x;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um numero do vetor 1:\n");
	scanf("%d",&num);
	while(TL1<TF && num>0)
	{
		pos=0;
		while(pos<TL1 && num>vet1[pos])
			pos ++;
		for(i=TL1; i>pos; i--)
			vet1[i]= vet1[i-1];
		vet1[pos]=num;
		TL1++;
		if(TL1<TF)
		{
			printf("Digite um número do vetor 1:\n");
			scanf("%d",& num);
		}
	}
	printf("Digite um numero do vetor 2:\n");
	scanf("%d",& num);
	while(TL2<TF && num>0)
	{
		pos=0;
		while(pos<TL2 && num>vet2[pos])
			pos ++;
		for(i=TL2; i>pos; i--)
			vet2[i]= vet2[i-1];
		vet2[pos]=num;
		TL2++;
		if(TL2<TF)
		{
			printf("Digite um número do vetor 2:\n");
			scanf("%d",& num);
		}
	}
	i=0;
	j=0;
	while(i<TL1 && j<TL2)
	{
		if(vet1[i]>vet2[j])
		{
			vet3[TL3]=vet2[j];
			j++;
		}
		else
		{
			vet3[TL3]=vet1[i];
			i++;
		}
		TL3++;
	}
	while(i<TL1)
	{
		vet3[TL3]=vet1[i];
		i++;
		TL3++;
	}
		while(j<TL2)
	{
		vet3[TL3]=vet2[j];
		j++;
		TL3++;
	}
	for(x=0; x<TL3; x++)
        printf("%d ", vet3[x]);
	getch();
	return 0;
}
