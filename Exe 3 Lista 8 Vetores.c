#include <stdio.h>
#include <locale.h>
#include <conio.h>
# define TF 5
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int TL=0, vet[TF], vet1[TF], num, i, j;
    
    while (TL < TF)
    {
        do
        {
            printf("Digite um número: ");
            scanf("%d",&num);
            
            if(num == 0)
                printf("Digite um número difente de zero! ");
            else
                i = 1;
        }while(i != 1);
        
        vet[TL] = num;
        TL++;
    }
    i = 1;
    j = TF - 1;
    for(TL = 0; TL < TF; TL++){
    	
        if(vet[TL] > 0){
        	
            vet1[j] = vet[TL];
            j--;
            
        }else{
        	
            vet1[i] = vet[TL];
            i++;
        }
    }
    for(TL = 0; TL < TF; TL++)
        printf("\nVetor Resuntante: %d", vet1[TL]);
        
    getch();
    return 0;
}
