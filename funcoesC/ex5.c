#include <stdio.h>
#include <stdbool.h>


bool primo(int num){
  int x = 0;
  int cont = 0;

  while (x < num){
   x++;
   if(num % x == 0){
    cont++;
   }
  }
  if(cont <= 2){
   return true;
  }else{
   return false;
  }
}

int main(){
 int num1;
 int num2;
 
 printf("Digite o número que a lista vai começar: ");
 scanf("%d", &num1);
 
 printf("Digite o número onde a lista acaba: ");
 scanf("%d", &num2);

 while (num1 <= num2){	 
  if(primo(num1) == true){
   printf("%d ", num1);
  }
  num1++;
 }
 printf("\n");
}
