
#include <stdio.h>
int fatorial(int num);
int somatorio(int num);
int main(void) {
  int num, fat, som, opcao;
  do{
  	printf("Menu\n(1)Fatorial\n(2)Somatorio\n");
  	scanf("%d", &opcao);
  	printf("Insira um numero:\n");
  	scanf("%d", &num);
  	switch (opcao){
    case 1:
    fat = fatorial(num);
    printf("Fatorial:%d\n", fat); break;
    case 2:
    som = somatorio(num);
    printf("Somatório:%d\n", som);
  }
  printf("Deseja continuar?(0)Sair\n");
  scanf("%d", &opcao);
  }while(opcao != 0);
  return 0;
}
int fatorial(int num){
  int i=0, resul=1;
   for(i=1;num>1;num--){
     i = i * num;
     resul = i;
     }
  return resul;  
}
int somatorio(int num){
  int i=0, soma=1;
  for(i=1;num>1;num--){
     i = i + num;
     soma = i;
     }
  return soma;
}

