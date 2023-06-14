
#include <stdio.h>

int main(void) {
  int i, elemento[5], j, aux;
  printf("Ordem de elementos\n");
  for(i=0;i<5;i++){
    printf("Digite um elemento:");
    scanf("%d", &elemento[i]);     
  }
  for(i=0;i<4;i++){
    for(j=i+1;j<5;j++){
      if(elemento[i]>elemento[j]){
        aux=elemento[i];
        elemento[i]=elemento[j];
        elemento[j]=aux;
      }
    }
  }
  for(i=0;i<5;i++){
    printf("%d,", elemento[i]);
  }
  
  return 0;
}
