#include <stdio.h>
#include <stdbool.h>

bool divisor(int n, int d){
 if ((n % d) == 0){
   return true;
 }else{
  return false;
 }
}

int numDiv(int m){
 int d = 0;
 int cont = 0;
 while (d < m) {
  d++;
  if (divisor(m,d) == true){
   cont++;
  }
 }
 return cont; 
}

int main(){
  int num;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  int resultado = numDiv(num);

  printf("A quantidade de divisores desse número é: %d \n", resultado);
}
