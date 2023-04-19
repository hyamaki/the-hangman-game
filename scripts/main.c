#include <stdio.h>

int main()
{
  int x;

  printf("Escolha as opcoes 1 ou 2: \n");
  scanf("%d", &x);

  if(x == 1) {
    printf("Jogar\n");
  } else
  if (x == 2)
  {
     printf("Sair\n");
  }
  
  system("pause");
  return 0;
}
