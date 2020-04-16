#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main (){
	
	char mat[10001], aux;
	int n, l, c, i;
	
	scanf("%d",&n);
	
	for (l = 0; l < n; l++)
		scanf("%[^\n]s\n",mat);
	
	for (c = 0; mat[c] != '\0'; c++)
		if(mat[c] >= 'A' && mat[c] <= 'Z')
			mat[c] = mat[c] + 3;
		else
			if(mat[c] >= 'a' && mat[c] <= 'z')
				mat[c] = mat[c] + 3;
		
	
	for(c = 0, i = strlen(mat)-1; c < i; c++, i--){
		aux = mat[c];
		mat[c] = mat[i];
		mat[i] = aux;
	}
		
	for(l = 0; l < n; l++) 
		for(c = strlen(mat)/2; mat[c] != '\0'; c++)
			mat[c] = mat[c] - 1;
	
			
	for (l = 0; l < n; l++)
		printf("%s\n",mat[l]);
		
	return 0;
}
