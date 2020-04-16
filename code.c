#include<stdio.h>
#include<conio.h>
#include<string.h>
#define ST 100
int main()
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz", text[ST];
	
	int sizealpha = strlen (alpha), sizetext, i, x;
	
	do
	{
		printf("Digite uma frase: ");
		gets(text);
		
		sizetext = strlen (text);
		//printf("%d",sizealpha);
		for(i=0; i<sizetext; i++)
		{
			for(x=0; x<sizealpha; x++)
			{
				if(text[i]==alpha[x])
				{
					if(x >= 23)
					{
						text[i]=alpha[x-23];
						i++;
					}		
					else
					{
						text[i]=alpha[x+3];
						i++;
					}
				}
			}
		}
		printf("\n%s",text[0]);
		printf("\n\nSair(1) Continuar(2): ");
		scanf("%d",&i);
		/*for(i=0; i<sizetext; i++)
		{
			printf("%s",text[i]);
		}*/
	}while(i!=1);
	getch();
}
