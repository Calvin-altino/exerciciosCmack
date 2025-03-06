#include <stdio.h>

int main(){
 float media;
 int freq;

 printf("Digite sua média: ");
 scanf("%f", &media);

 printf("Digite sua frequencia (%): ");
 scanf("%d", &freq);
 
 if (freq < 75){
  printf("REPROVADO! \n");
 }else{
  if(media >= 6){
   printf("APROVADO!\n");
  }else{
   printf("EXAME!\n");
  }
 }
 
}
