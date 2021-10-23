#include <stdio.h>

long int labsdif(long int x) {
  return x < 0 ? -x : x;
}

int main(void) {
  long int x, y;
  while(scanf("%li%li", &x, &y) != EOF) {
    printf("%li\n", labsdif(x - y));
  }
  return 0;
}
