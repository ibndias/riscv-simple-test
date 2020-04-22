#include <stdio.h>
extern int aw(int x, int y);

int main() {
 int result = 0;
 result = aw(0xC0, 0x0B); //0xAB
 printf("Result 0x%x\n",result);
 return result;
}

