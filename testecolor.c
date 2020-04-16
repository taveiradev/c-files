#include<stdio.h>


int main(){
	
	int in;
	
	
	do{
		printf("Color [0 Out]: ");
		scanf("%d",&in);
		
		if (in == 1){
			system("color A");
			printf("\nGreen\n\n");
		}
		if (in == 2){
			system("color B");
			printf("\nBlue\n\n");
		}
		
	}while (in != 0);
	return 0;
}
