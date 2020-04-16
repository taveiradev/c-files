#include <stdio.h>

int main(){
	
	int n, i, l, j, k, soma;
	char word[100][51];
	
	scanf("%d",&n);
	
	for (i = 0; i < n; i++){
		
		soma = 0;
		
		scanf("%d",&l);
		
		for (j = 0; j < l; j++){
			fflush(stdin);
			scanf("%s",word[j]);
			
		}
		
		for (j = 0; j < l; j++)
			for (k = 0; word[j][k] != '\0'; k++)
				soma += j + k + word[j][k] - 65;
		printf("%d\n",soma);
	}

	return 0;
}
