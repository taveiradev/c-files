#include<stdio.h>
#include<string.h>
main (){
	
	char mat[1001], aux;
	int n, l, c, i;
	
	scanf("%d\n",&n);
	
	for (l = 0; l < n; l++)
		scanf(" %[^\n]s\n",mat);
	
	for (c = 0; mat[c] != '\0'; c++)
		if(mat[c] >= 65 && mat[c] <= 90)
			mat[l][c] = mat[l][c] + 3;
		else
			if(mat[l][c] >= 97 && mat[l][c] <= 122)
				mat[l][c] = mat[l][c] + 3;
					
		for(c = 0, i = strlen(mat[l])-1; c < i; c++, i--){
			aux = mat[l][c];
			mat[l][c] = mat[l][i];
			mat[l][i] = aux;
		}
		for(c = strlen(mat[l])/2; mat[l][c] != '\0'; c++)
			mat[l][c] = mat[l][c] - 1;
	}
			
	for (l = 0; l < n; l++)
		printf("%s\n",mat[l]);
		
	return 0;
}
