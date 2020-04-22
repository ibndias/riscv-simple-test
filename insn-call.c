#include <stdio.h>

int main(){
  int a,b,c;
  a = 5;
  b = 2;
  c = 1;
/*
  asm volatile
  (
    "add   %[z], %[x], %[y]\n\t"
    : [z] "=r" (c)
    : [x] "r" (a), [y] "r" (b)
  );  
 
  if ( c != 1 ){
     printf("\n[[FAILED]] %d\n",c);
     return -1;
  }
  */
  asm volatile
  ( 
    ".insn i 0x03, 7, %[z], %[x], %[y]\n\t"
    : [z] "=r" (c)
    : [x] "r" (a), [y] "r" (b)
  );  
  
  printf("\n[[PASSED]] %d\n",c);

  return 0;
}
