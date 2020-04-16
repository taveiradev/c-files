	#include <stdio.h>
	#include <string.h>
	main (){
		
		char mat[10000], aux;
		int n, l, c, i;
		
		scanf("%d\n",&n);
		
		for (l = 0; l < n; l++){
			fflush(stdin);
			scanf("%s",mat);
		}
		
		for (l = 0; l < n; l++){
			
			for (c = 0; mat[c] != '\0'; c++)
				if(mat[c] >= 'A' && mat[c] <= 'Z' || mat[c] >= 'a' && mat[c] <= 'z')
					mat[c] = mat[c] + 3;
						
			for(c = 0, i = strlen(mat)-1; c < i; c++, i--){
				aux = mat[c];
				mat[c] = mat[i];
				mat[i] = aux;
			}
			for(c = strlen(mat)/2; mat[c] != '\0'; c++)
				mat[c] = mat[c] - 1;
					
			printf("%s\n",mat);
		}
		return 0;
	}
