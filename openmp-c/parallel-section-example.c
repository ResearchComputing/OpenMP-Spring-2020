#include <stdio.h>
#include <omp.h>

int main(int argc, char const *argv[]) {

  int sum = 0;

  #pragma omp parallel sections reduction(+:sum)
  {
    #pragma omp section
    for (int i = 1; i < 11; i++) {
      sum += i;
    }
    #pragma omp section
    for (int i = 1; i < 101; i++) {
      sum += i;
    }
    #pragma omp section
    for (int i = 1; i < 1001; i++) {
      sum += i;
    }
  }

  printf("Total sum of 3 loops: %d\n", sum);

  return 0;
}
