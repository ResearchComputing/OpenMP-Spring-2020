#include <stdio.h>
#include <omp.h>

int main(int argc, char const *argv[]) {

  long int sum = 0;

  #pragma omp parallel for reduction(+:sum)
  for(long int i = 1; i < 1000000001; i++){
    sum += i;
  }

  printf("Sum of 1 to 1000000000: %ld\n", sum);

  return 0;
}
