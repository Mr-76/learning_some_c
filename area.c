#include <stdio.h>

int main(){
double v1,v2,v3;

scanf("%lf %lf %lf",&v1, &v2, &v3);

double triangulo = (v1 * v3) / 2;
double circulo = 3.14159*v3*v3;
double trapezio = (v1 + v2) * v3 /2;
double quadrado = v2*v2;
double retangulo = v1 * v2;



printf("TRIANGULO: %.3lf\n",triangulo);
printf("CIRCULO: %.3lf\n",circulo);
printf("TRAPEZIO: %.3lf\n",trapezio);
printf("QUADRADO: %.3lf\n",quadrado);
printf("RETANGULO: %.3lf\n",retangulo);






return 0;
}
