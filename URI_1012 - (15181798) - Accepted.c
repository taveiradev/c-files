#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main()
{
	double a, b, c;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	printf("TRIANGULO: %.3lf\n",a*c/2);
	printf("CIRCULO: %.3lf\n",(pow(c,2))*pi);
	printf("TRAPEZIO: %.3lf\n",(a+b)/2*c);
	printf("QUADRADO: %.3lf\n",pow(b,2));
	printf("RETANGULO: %.3lf\n",a*b);
	return 0;
	
}