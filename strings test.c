#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define wordsize 30

main (){
	
	//char texto1[wordsize] = {'V','I','C','T','O','R',' ','T','A','V','E','I','R','A'};
	
	int i, j, size, vogal;
	char aux;
	char c;
	char vogais[11] = "aeiouAEIOU";
	char texto1[wordsize] = {"VICTOR "};
	char texto2[wordsize] = {"TAVEIRA RODRIGUES"};
	char texto3[wordsize];
	char texto4[wordsize];
	char texto5[wordsize]; //string invertida
	char texto6[12] = "texto texte";
	char texto7[] = "texto maior teste";
	//char texto6[wordsize];
	//char texto6[wordsize];
	
	
	
	strcat(texto1,texto2);
	printf("Texto 1: %s\n\n",texto1);
	printf("Texto 2: %s\n\n",texto2);
	
	strcpy(texto3,texto1);
	
	printf("Texto 3: %s\n\n",texto3);
	
	if (stricmp(texto3,texto2) == 0)
		printf("Iguais\n\n");
	else
		printf("Diferentes\n\n");
		
	for (i = strlen(texto3)-1; i >= 0; i--)
		printf("%c",texto3[i]);
	printf("\n\n");
	
	///strcpy com for
	for (i = 0; texto1[i] != '\0'; i++)
		texto4[i] = texto3[i];
	texto4[i] = '\0';
	printf("Texto 4: %s\n\n",texto4);
	
	for (i = strlen(texto3)-1, j = 0; i >= 0; i--, j++)
		texto5[j] = texto3[i];
	texto5[j] = '\0';
	printf("Texto 5: %s\n\n",texto5);
	
	for (i = 0, j = strlen(texto5)-1; i < j; i++, j--){
		aux = texto5[j];
		texto5[j] = texto5[i];
		texto5[i] = aux;
	}
	printf("Texto 5 com aux: %s\n\n",texto5);
	//printf("\nStrlen txt5: %d\n\n",strlen(texto5));
	
	size = strlen(texto5);
	for (i = 0; i < size / 2; i++){
		c = texto5[i];
		texto5[i] = texto5[size - 1 - i];
		texto5[size - 1 - i] = c;
	}
	printf("Texto 5 com size: %s\n\n",texto5);
	
	for (i = 0, vogal = 0; i < strlen(texto4); i++)
		for (j = 0; j < strlen(vogais); j++)
			if (vogais[j] == texto4[i]){
				vogal++;
				break;
			}
	
				
			
	printf("Vogais: %d\n\n",vogal);
	
	printf("strlen texto6: %d\n\n",strlen(texto6));
	
	strcpy(texto6,texto7);
	printf("%s",texto6);
		
	printf("\n\n");
	system("pause")	;
}
