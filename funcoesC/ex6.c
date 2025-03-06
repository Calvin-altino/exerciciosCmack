#include <stdio.h>
#include <math.h>

float somatorio(int n){
  double x = 0.0;
  float total = 0;

  while(x < n){
   x++;
   total += x/pow(x, 2.0) * pow(-1.0, x+1.0); 
  }

  return total;
}


int main(){

 int n;

 printf("Digite o valor de n: ");
 scanf("%d", &n);
 printf("Resultado da somátoria é %.2f \n", somatorio(n));

 return 0;
}
