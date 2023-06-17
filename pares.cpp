
#include <stdio.h>
int pares(int n, int *vet);
int main(void) {
  int i, vet[5], par=0;
  printf("Contador de numeros pares\n");
  for(i=0;i<5;i++){
    printf ("Insira um numero inteiro:\n");
    scanf("%d", &vet[i]); 
  }
  par=pares(5,vet);
  printf("%d numeros pares no vetor", par);
  return 0;
}
int pares(int n, int *vet){
  int i, soma=0;
  for(i=0;i<5;i++){
    if(vet[i]%2==0){
      soma++;
    }
  }
  return soma;
}
