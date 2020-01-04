#include <iostream>

/*
	Recursividade - uma função que chama ela mesma N vezes
*/

using namespace std;

void fib(int, int, int b = 1, int c = 1);

int main(){
	
	fib(1134903170); // até nº fib(45) 1134903170, usando int, com o compilador do Dev-C++!
	system("start chrome https://oeis.org/A000045/b000045.txt");
	return 0;
}

void fib(int f, int a, int b, int c){
	cout  << c << endl;
	a = b;
	b = c;
	c = a + b;	
	if (c <= f)
		fib(f, a, b, c);
}

