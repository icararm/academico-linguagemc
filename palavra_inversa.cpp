
#include <stdio.h>
#include <string.h>
int main(void) {
  int i;
  char string[10];
  printf("String em ordem inversa:\nDigite uma palavra:\n");
  scanf("%s", string);

  for(i=strlen(string);i--;){
    printf("%c", string[i]);
  }
  printf("\n");
  return 0;
}
