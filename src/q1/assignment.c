#include <stdio.h>

int main(int arg, char* argc[]){
  printf("Hello assignment1.\n");

  int a = 1;
  int* b = &a;
  long c = 1000000;
  double* d;
  char** e;

  printf("int a = %lu\n", sizeof(a));
  printf("int* b = %lu\n", sizeof(b));
  printf("long c = %lu\n", sizeof(c));
  printf("double* d = %lu\n", sizeof(d));
  printf("char** e = %lu\n", sizeof(e));

  return 0;
}
