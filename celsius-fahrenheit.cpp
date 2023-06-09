#include <stdio.h>

int celsius(int num);
int fahrenheit(int num);

int main(void) {
  int opcao, num; //conv_c=0, conv_f=0;
 do{
    printf("Conversor\n(1)Fahrenheit para celsius\n(2)Celsius para farenheit\n");
  scanf("%d", &opcao);
  printf("Insira a temperatura:\n");
  scanf("%d", &num);
   if(opcao == 1){
      celsius(num);
   }else if(opcao == 2){
      fahrenheit(num);
   }
   printf("Deseja continuar?\n(0)sair\n(1)continuar\n");
   scanf("%d", &opcao);
 }while(opcao != 0);
  
  return 0;
}
int celsius(int num){
 int c;
  c = 5*(num-32)/9;
  printf("%d celsius\n", c);
  return c;
}
int fahrenheit(int num){
  int f;
  f = (9*num/5)+32;
  printf("%d fahrenheit\n", f);
  return f;
}
