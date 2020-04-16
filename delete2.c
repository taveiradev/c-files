#include <stdio.h>
#define tf 10

int main (){
	
	int vet1[tf], vet2[tf], interc[tf*2], i, p;
	
	for(i = 0, p = 0; i < tf; i++){
		scanf("%d",&vet1[i]);
		interc[p] = vet1[i];
		p+=2;
	}
	
	for (i = 0, p = 1; i < tf; i++){
		scanf("%d",&vet1[i]);
		interc[p] = vet1[i];
		p+=2;
	}
	
	printf("\nIntercalacao\n\n");
	
	for (i = 0; i < tf*2; i++)
		printf("[%d]",interc[i]);
		
	
	
	return 0;	
}
