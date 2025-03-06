#include <stdio.h>

int main(){
 float pi = 3.141592;

 float r;
 printf("Digite o raio da esfera: ");
 scanf("%f", &r);

 float Aesf = 4 * pi * (r * r);
 printf("A área da esfera é %.2f \n", Aesf);

 return 0;
}
