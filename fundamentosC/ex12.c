#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
 
 srand(time(0));

 int tentativas = 1;
 int value = rand();		
 int aleatorio = (value % (100 - 1 + 1)) + 1;   

 int sort;
 printf("Digite o número sorteado de 1 a 100: ");
 scanf("%d", &sort);
 
 while (sort < 1 | sort > 100){
  printf("Número inválido! \n"); 
  printf("Digite o número sorteado novamente: ");
  scanf("%d", &sort);
 }

 int ganhou = 0;
 
 while(tentativas != 5 & ganhou == 0){ 
  if(sort < aleatorio){
   printf("Você chutou muito baixo! tente novamente: ");
   tentativas = tentativas + 1;
   scanf("%d", &sort);
  }if (sort > aleatorio){
   printf("Você chutou muito alto! tente novamente: ");
   tentativas++;
   scanf("%d", &sort );
  }if (sort == aleatorio){
    tentativas = tentativas - 1;
    ganhou = 1;
  }
 }

 if(tentativas == 5){
    printf("Execedeu o número de tentativas! \n");
 }

 if(ganhou == 1){
    printf("Parabéns!! Você acertou!\n");
    printf("Foram %d \n", tentativas);
 }

 return 0;
}
