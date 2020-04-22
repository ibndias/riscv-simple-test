#include <stdio.h>

int main(){
  int a,b,c;
  a = 5;
  b = 2;
  asm volatile
  (
    "adder   %[z], %[x], %[y]\n\t"
    : [z] "=r" (c)
    : [x] "r" (a), [y] "r" (b)
  );  

  return 0;
}
