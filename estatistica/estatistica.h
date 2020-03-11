#include <math.h>
#include <locale.h>
#define TF 899


void swap(double *xp, double *yp) 
{ 
    double temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void ordena(double array[], int n){
	
	
	for (int i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (int j = 0; j < n-i-1; j++)  
           if (array[j] > array[j+1]) 
              swap(&array[j], &array[j+1]); 
              
}

double soma(double array[], int n){
	
	double _soma = 0;
	
	for (int i = 0; i < n-1; i++)      
		_soma += array[i];
		
	return _soma;
	
	
}

double calcMedia(double array[], int qtde){
	
	return soma(array, qtde)/qtde;
}
