#include <stdio.h>

float soma(float num1, float num2, float num3){
 float resultado = num1 + num2 + num3;
 return resultado;
}

int main(){
 
 float num1;
 float num2;
 float num3;

 printf("Digite o primeiro valor: ");
 scanf("%f", &num1);

 printf("Digite o segundo valor: ");
 scanf("%f", &num2);

 printf("Digite o terceiro valor: ");
 scanf("%f", &num3);

 float resultado = soma(num1,num2,num3);

 printf("A soma dos números digitados é %.2f \n", resultado);
 return 0;
}
