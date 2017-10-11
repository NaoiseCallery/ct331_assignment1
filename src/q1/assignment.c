#include <stdio.h>

int main(int arg, char* argc[]){
  printf("Hello assignment1.\n");

  int a = 1;
  int* b = &a;
  long c = 1000000;
  double* d;
  char** e;

  printf("int a = %d\n", sizeof(a));
  printf("int* b = %p\n", sizeof(b));
  printf("long c = %lld\n", sizeof(c));
  printf("double* d = %p\n", sizeof(d));
  printf("char** e = %p\n", sizeof(e));

  return 0;
}
