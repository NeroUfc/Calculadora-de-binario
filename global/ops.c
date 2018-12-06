#include<stdlib.h>
#include<stdio.h>
int pot(int var, int expo) {
  return (expo > 0)
    ? var * pot(var, expo - 1)
    : 1
  ;
}
int qt_alg(int n) {
  return (n > 0)
    ? 1 + qt_alg(n / 10)
    : 0
  ;
}
void num_vetor(int n, int *nums) {
  int i = 8 - qt_alg(n), casas;

  while (n > 0) {
    casas = pot(10, qt_alg(n) - 1);
    nums[i] = n / casas;
    n = n % casas;
    i += 1;
  }
}
