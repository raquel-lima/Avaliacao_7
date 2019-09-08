#include <stdio.h> 
#include <time.h> 
#include <math.h>

int fiboItr(int n);
int fiboRec(int n);

// Avaliando o tempo de excucao da Sequencia de Fibonacci
// Raquel Lima Fernandes 
//Testando commit
int main(void) {
  int num, f;
  float ff;
  clock_t t;
  
  printf("SequÃƒÂªncia Fibonacci\n");
  printf("Quantos termos deseja? ");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++) {
	t = clock();
    f = fiboRec(i);
    t = clock() - t;
    ff = ((float)t)/CLOCKS_PER_SEC;
    printf("\n");
    printf("%d\t\t%d\t\t%f\n", i, f, ff);
  }
  printf("\nFim do Programa!\n");
  return 0;
}

//Funcao recursiva
int fiboRec(int n) {
  if ((n == 1) || (n == 2))
    return 1;
  else
    return fiboRec(n-1) + fiboRec(n-2);
}

// Funcao interativa
int fiboItr(int n) {
  if ((n == 1) || (n == 2))
    return 1;
  else {
    int a = 1;
    int b = 1;
    int c;
    for (int k = 3; k <= n; k++) {
      c = a + b;
      a = b;
      b = c;
    }
    return c;
  }
}