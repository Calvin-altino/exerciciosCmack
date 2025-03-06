#include <stdio.h>

int main(){
 double x = 0;
 int n;
 double total = 0;

 printf("Digite o limite superior do somatório: ");
 scanf("%d", &n);

 while (x < n){
  x++;
  total += ((x/2) + 5*x);
 }

 printf("%.1f \n", total);

 return 0;
}
