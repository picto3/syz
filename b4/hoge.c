#include <stdio.h>

int main(void) {
  int a;
  unsigned char *p;

  a = 0x1234;
  printf("%x\n",a);
  
  p = (unsigned char *)&a;
  *p = 0x11;
  printf("%x\n",a);

  return 0;
}
