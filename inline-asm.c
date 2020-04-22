#include <stdio.h>
int src = 1;
int dst;   
int main(){
asm ("add a0, $1, $2"
    : "=r" (dst) 
    : "r" (src));

printf("%d\n", dst);
return 0;
}
