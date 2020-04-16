#include <stdio.h>
#define TF 50 

int main(){
	
	int num, vet1[TF], vet2[TF], i, j, pos, TL1 = 0, TL2 = 0;
	
	scanf("%d",&num);
	
	while(TL1 < TF && num != 0){
		
		vet1[TL1] = num;
		TL1++;
		
		if(TL1 < TF)
			scanf("%d",&num);
	}
	printf("\n");
	
	for(i = 0; i < TL1; i++)
		printf("[%d]", vet1[i]);
		
	printf("\n");
	
	
	for(i = 0, j = TL1-1; TL2 < TL1; TL2++){
		
		if (vet1[TL2] > 0){
			vet2[j] = vet1[TL2];
			j--;
		}
		else{
			vet2[i] = vet1[TL2];
			i++;
		}
	}
	printf("\n");
	for(i = 0; i < TL2; i++)
		printf("[%d]",vet2[i]);
		
	return 0;
}
