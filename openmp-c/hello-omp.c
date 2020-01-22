#include <stdio.h>

int main(int argc, char const *argv[]) {
  #pragma omp parallel
  {
    printf("Hello World from Parallel!\n");
  }

  printf("Goodbye\n");
  return 0;
}
