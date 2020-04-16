#include <stdio.h>
#include <math.h>

/*
	TELA
	
	x=7, y=0
	x=3, y=1
	x=1, y=11
	x=0, y=111
	x=11, y=11
	x=11, y=1

*/
int main(){
	int D = 9;
	int x = 5+D, y = 0, z;
	while (x != 0){
		
		y = (x % 2) + 10 * y;
		x = x / 2;
		printf("x = %d, y = %d\n", x, y);
	}
	while (y != 0){
		
		z = pow (10,2);
		x = y % z;
		y = y / sqrt(100);
		printf("x = %d, y = %d\n", x, y);
	}
	return 0;
}
